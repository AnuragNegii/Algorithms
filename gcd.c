#include <stdio.h>
int gcd(int a, int b);
int main() {
  int a = gcd(15265, 15);
  printf("%d", a);
}

int gcd(int a, int b) {
  int c;
  while (b != 0) {
    c = a % b;
    a = b;
    b = c;
  }
  return a;
}
