#include <stdio.h>
#include <stdlib.h>

void presskey() {
  printf("Presione una tecla para continuar\n");
  getchar();
}
void read_menu() {
  FILE *fp;
  fp = fopen("notas.txt", "r");
  if(fp == NULL) {
    printf("No hay notas\n");

    return;
  }
  int c;
  while((c = fgetc(fp)) != EOF) {
    putchar(c);
  }
  fclose(fp);
  return;
}
void print_menu() {
  printf("Bienvenido a la app de notas\n");
  printf("1)Ver notas\n");
  printf("2)Agregar notas\n");
  printf("3)Borrar notas\n");
  printf("4)Salir\n");
}
void see(int c, FILE *fp) {
  fp = fopen("notas.txt", "r");
  printf("--------Notas--------\n");
  while((c = fgetc(fp)) != EOF) {
    putchar(c);
  }
  printf("--------FIN----------\n");
  fclose(fp);
}

void write(int c, FILE *fp) {
  char notas[100] = "";
  c = getchar();
  fp = fopen("notas.txt", "a");
  printf("Que queres anotar?\n");
  fgets(notas, 100, stdin);
  fprintf(fp, "%s", notas);
  fclose(fp);
}

void delete(FILE *fp) {
  fp = fopen("notas.txt", "w");
  fclose(fp);
}

int main(void) {
  FILE *fp;
  int c;
  int n;
  while(1) {
    print_menu();
    scanf("%d", &n);
    switch (n) {
      case 1:
      see(c,fp);
      break;
      case 2:
      write(c, fp);
      break;
      case 3:
      delete(fp);
      break;
      case 4:
      exit(0);
      default:
      printf("Opcion invalida\n");
    }
  }
  return 0;
}
