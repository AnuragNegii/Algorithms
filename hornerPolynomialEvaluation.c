
#include <stdio.h>
float hornersPolynomialEvaluation(float poly[], int degree, float x);
int main() {
  float poly[] = {3, 2, -1, 5};
  int degree = 4;
  float x = 2.0;

  float result = hornersPolynomialEvaluation(poly, degree, x);
  printf("result: %.2f\n", result);
  return 0;
}

float hornersPolynomialEvaluation(float poly[], int degree, float x) {
  float result = poly[0];
  for (int i = 1; i < degree; i++) {
    result = result * x + poly[i];
  }
  return result;
}
