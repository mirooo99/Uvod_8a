#include <stdio.h>
void main() {
  float a, x, b;

  printf("ax + b = 0\n");
  printf("a = ");
  scanf("%f", &a);
  printf("b = ");
  scanf("%f", &b);

  x = -(b/a);

  printf("%f", x);
}
