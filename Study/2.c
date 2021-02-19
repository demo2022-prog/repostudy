#include <stdio.h>
#include <math.h>

int calculateSquareEquation (int a, int b, int c, float* x1, float* x2) {
    float D;
    D = b * b - 4 * a * c;
    if (a == 0) {
        *x1 = -c / b;
        return 0;
    }
    else if (D > 0) {
        *x1 = (-b + sqrt(D)) / (2 * a);
        *x2 = (-b - sqrt(D)) / (2 * a);
        return 1;
    }
    else if (D == 0) {
        *x1 = -b / (2 * a);
        return 0;
    }
    else {
        return -1;
    }
}

int main() {
    int a, b, c;
    float x1, x2;

    printf ("This program will calculate a square eqution 'ax2 + bx + c = 0'");
    printf ("\n Enter a: ");
    scanf ("%d", &a);
    printf ("\n Enter b: ");
    scanf ("%d", &b);
    printf ("\n Enter c: ");
    scanf ("%d", &c);

    int result;
    result = calculateSquareEquation(a, b, c, &x1, &x2);
    switch (result) {
    case 0:
        printf("Equation has a unique root x = %lf", x1);
        break;
    case 1:
        printf("Equation has two roots x1 = %f, x2 = %lf", x1, x2);
        break;
    case -1:
        printf("Equation has no roots");
        break;
    default:
        printf("Exceptional answer: %d", result);
    }
    return 0;
}
