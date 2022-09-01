#include <stdio.h>
#include <stdio.h>

void write_notes() {
  FILE *fp;
}
void delete_notes() {
  FILE *fp;
  fp = fopen("notas.txt", "w");
  fclose(fp);
  printf("Notas borradas!\n");
  printf("Presione cualquier tecla para continuar\n");
  getchar();
  return;
}
void read_notes() {
  FILE *fp;
  fp = fopen("notas.txt", "r");
    int c;
    while((c = fgetc(fp)) != EOF) {
      putchar(c);
    }
    printf("Presione cualquier tecla para continuar\n");
    getchar();
    fclose(fp);
    return;
}

int main(void) {
  int choice;
  while(1) {

  }
}
