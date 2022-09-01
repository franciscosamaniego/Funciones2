#include <stdio.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
void arr_swap(int array[], int i, int j) {
  int t = array[i];
  array[i] = array[j];
  array[j] = t;
}
int main(int argc, char *argv[]) {
  int a = 12;
  int b = 3;
  int array[] = {1,2,3,4};

  printf("a:%d b:%d\n", a, b);
  swap(&a,&b);
  printf("a:%d b:%d\n", a, b);

  printf("array[0]: %d array[3]: %d\n", array[0], array[3]);
  arr_swap(array, 0, 3);
  printf("array[0]: %d array[3]: %d\n", array[0], array[3]);
}
