#include <stdio.h>
#include <string.h>

int calculateSquareEquality (int a, int b, int c, float * x1, float * x2)
{
    float D = b*b - 4.0f*a*c;
    if (D > 0.0f)
    {
        *x1 = (sqrt(D) -b) / (2.0f * a);
        *x2 = (-sqrt(D) -b) / (2.0f * a);
        return 1;                           // два корня
    }
    else if (D == 0.0f)
    {
        *x1 = *x2 = -b / (2.0f * a);
        return 0;                           // один корень
    }
    else return -1;                         // не имеет корней
}
