#include "foo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
const float PI = 3.1415;
int main()
{
    int a, b, c, x1, y1, r1, x2, y2, r2;
    float p, s;

    printf("Enter x, y, radius of 1-st circle: ");
    scanf("%d %d %d", &x1, &y1, &r1);
    p = PerimetrC(r1, PI);
    s = SquareC(r1, PI);
    printf("Perimetr = %f Square = %f\n", p, s);

    printf("Enter x, y, radius of 2-nd circle: ");
    scanf("%d %d %d", &x2, &y2, &r2);
    p = PerimetrC(r2, PI);
    s = SquareC(r2, PI);
    printf("Perimetr = %f Square = %f\n", p, s);

    Cross(x1, y1, r1, x2, y2, r2);

    printf("Enter sides of triangle(a,b,c):");
    scanf("%d %d %d", &a, &b, &c);
    p = PerimetrT(a, b, c);
    s = SquareT(a, b, c);
    printf("Perimetr = %f Square = %f\n", p, s);
    return 0;
}
