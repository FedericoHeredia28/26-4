#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  if (b < a)  {
    printf("El segundo argumento debe ser mayor al primero para que el programa funcione\n");
    return 1;
  }
for (int i = a; i < b ; i++) {
  if (a%3 == 0) {
    printf("%d\n", a);
  }
}

  return 0;
}
