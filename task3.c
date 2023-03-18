#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int mas[10];
    i = 0;

    // first subtask
    for (i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            mas[i] = 7;
        }
        // second subtask
        else
        {
            mas[i] = i * i;
        }
        printf("%d = %d\n", i, mas[i]);
    }

    return 0;
}