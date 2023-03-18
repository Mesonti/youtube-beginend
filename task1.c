#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    int i;

    printf("Welcome to calculator\n");
    //for x operation
    printf("Input x = ");
    scanf("%f", &x);
    //for y operation
    printf("Input y = ");
    scanf("%f", &y);

    printf("Choose a operation:\n 1: +\n2: -\n3: *\n4: /\n");
    scanf("%d", &i);

    if (i == 1)
    {
        printf("%g + %g = %g", x, y, x + y);
    }
    if (i == 2)
    {
        printf("%g - %g = %g", x, y, x - y);
    }
    if (i == 3)
    {
        printf("%g * %g = %g", x, y, x * y);
    }
    if (i == 4)
    {
        printf("%g / %g = %g", x, y, x / y);
    }
}