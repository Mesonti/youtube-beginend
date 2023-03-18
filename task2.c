#include <stdio.h>
#include <stdlib.h>

int firstFun(int x)
{
    if (x < 10)
    {
        printf("%d", x);
    }
    else
    {
        printf("Error.");
    }
}

int secondFun(int a, int b)
{
    if (a > b)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
}

int main()
{
    firstFun(5);
    firstFun(15);

    secondFun(firstFun(5), 5);
    secondFun(firstFun(15), 15);
}