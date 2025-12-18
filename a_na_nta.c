#include <stdio.h>
void main () {
  int n, br = 0, c = 0;
  float a, m = 1;
  printf("Vuvedi a: ");
  scanf("%f", &a);
  printf("Vuvedi n: ");
  scanf("%d", &n);
  if(n < 0) {
    c = 1;
    n = -n;
  }

  while(br < n) {
    m *= a;
    br++;
  }

  if(c == 1) m = 1/m;

  printf("%f", m);
}
