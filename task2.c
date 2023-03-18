#include <stdio.h>
#include <stdlib.h>

void firstFun(int x)
{
    if (x < 10)
    {
        printf("%d\n", x);
    }
    else
    {
        printf("Error.\n");
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
    int t = secondFun(10, 5);
    
    firstFun(5);
    firstFun(15);
    firstFun(t);
    return 0;

}