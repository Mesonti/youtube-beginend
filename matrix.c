#include <stdlib.h>
#include <stdio.h>

int main() 
{
    int m[9][9];
    int i ;

    for (i = 0; i < 9; i++)
    {
        m[i] = i + 1;
        printf("%d\t", m[i]);
    }

    return 0;
    
}