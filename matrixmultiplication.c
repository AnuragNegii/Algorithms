#include <stdio.h>

int main() {
  printf("Enter first matrix");
  int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int s[3][3] = {};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      s[i][j] = 0;
      for (int k = 0; k < 3; k++) {
        s[i][j] = s[i][j] + a[i][k] * b[k][j];
      }
    }
  }

  printf("Matrix Multiplication is:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d,", s[i][j]);
    }
    printf("\n");
  }
  return 0;
}
