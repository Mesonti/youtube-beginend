#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int mas[10];
    i = 0;

    // first task
    for (i = 0; i < 10; i++)
    {
        mas[i] = 7;
        // second task
        while (mas[5])
        {
            mas[i] = i * i;
            if (mas[10])
            {
                break;
            }
        }

        printf("%d = %d\n", i, mas[i]);
    }

    return 0;
}