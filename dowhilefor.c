#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a = 0;
    char s[] = {"strokeis\0"};
    int sizeArray = sizeof(s) / sizeof(s[0]);
    char r = '#';
    char s1[8] = {"\0"};
    // задача 1
    printf("Task 1\n");
    for (int i = 1; i < 19; ++i)
    {
        if (i % 2 == 0)
        {
            printf("For %d\n", i);
        }
    }

    printf("-------------\n");
    while (a != 18)
    {
        a = a + 2;
        printf("While %d\n", a);
    }

    printf("-------------\n");
    do
    {
        a = a - 2;
        printf("Do While %d\n", a);
    } while (a != 0);

    printf("\n");
    printf("Task 2\n");
    // задача 2
    for (int e = 0; e < 8; e++)
    {
        s1[e] += r;
        s1[8] = 0;
    }
    printf("%s\n", s1);
    printf("\n");

    for (int j = 0; j < 8; j++)
    {
        // printf("Hello\n");
        s[j] = r;
        s[8] = '\0';
        printf("S: %s\n", s);
    }
    // while (sizeArray < a)
    // {
    //     s[]
    // }

    // задача 3
    for (int q = 0; q < 8; q++)
    {
        printf(" %c ", s[q]);
    }
}

/*  1. Измените цикл for так, чтобы на экран выводились только четные числа от 2 до 18.
    Сделайте тоже самое при помощи двух других циклов

    2. Создайте строку длиной 8 символов и при помощи любого цикла заполните её символом "#"
        После чего отобразите на экран как строку. Помните про символ конца строки.

    3. Отобразите посимвольно на экран строку из задания 2 при помощи любого цикла.
        Это можно сделать зная количество элементов или до символова конца строки.

    4. Дополнительно для 2 и 3 задания повторить с двумя другими циклами*/