#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int calcSquareEq(int a, int b, int c, double* x1, double* x2, int d){
      d = (b * b) - (4 * a * c);
      if (d > 0) {
        * x1 = (-b + sqrt(d)) / (2 * a);
        * x2 = (-b - sqrt(d)) / (2 * a);
        d = 1;
      }
      else if (d == 0) {
        d = 0;
        * x1 = (-b) / (2 * a);
      }
        else if (d < 0)  {
        d = -1;
      }
  return d;
}

int main(int argc, char const *argv[]) {
 int a;
 printf("Enter variable a: ");
 scanf("%d", &a);
 int b;
 printf("Enter variable b: ");
 scanf("%d", &b);;
 int c;
 printf("Enter variable c: ");
 scanf("%d", &c);
 double* x1;
 double* x2;
int d = calcSquareEq(a, b, c, &x1,& x2, d);
 printf("%d", calcSquareEq(a, b, c, &x1, &x2, d));
 return 0;
}
