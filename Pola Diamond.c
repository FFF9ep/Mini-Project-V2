#include <stdio.h>

int main() {
  int lebar, i, j, k;

  printf("Input lebar: ");
  scanf("%d", &lebar);

  printf("\n");

  for (i = 1; i <= lebar; i++) {

    for (j = 1; j <= lebar - i; j++) {
      printf(" ");
    }

    for (k = 1; k <= i; k++) {
      printf(" *");
    }
    printf("\n");
  }

  for (i = 1; i < lebar; i++) {

    for (j = 1; j <= i; j++) {
      printf(" ");
    }

    for (k = 1; k <= lebar - i; k++) {
      printf(" *");
    }
    printf("\n");
  }

  return 0;
}
