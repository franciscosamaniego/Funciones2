#include <stdio.h>
#include <stdlib.h>

void print_array(int a[], int length, int n) {
  for(int j = 0; j < n; j++) {
    for(int i = 0; i < length; i++) {
      printf("%d ", a[i]);
      }
    printf("\n");
    }
  }

int main(void) {
  int a[] = {1,2,3,4};
  int b[] = {99,101,72,99,535,1999,2006};
  int c[] = {0};
  print_array(a,4,2);
  print_array(b,7,4);
  print_array(c,1,1);
  return 0;
}
