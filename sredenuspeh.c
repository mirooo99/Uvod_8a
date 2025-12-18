#include <stdio.h>
void main() {
  int o, sum = 0, br, i = 0;
  float a;

  do {
    printf("br = ");
    scanf("%d", &br);
  } while(br <= 0);

  while (i < br) {
    do {
      printf("Ocenka = ");
      scanf("%d", &o);
    } while (o > 6 || o < 2);
    sum += o;
    i++;
  }

  a = (float)sum / br;
  printf("%f", a);
}
