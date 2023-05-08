#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a = 0;
    char s[] = {"strokeis\0"};
    char string[] = {"strokeis\0"};
    char string1[] = {"strokeis\0"};
    char string2[] = {"strokeis\0"};
    int sizeArray = sizeof(string) / sizeof(string[0]);
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
        a += 2;
        printf("While %d\n", a);
    }

    printf("-------------\n");
    do
    {
        a -= 2;
        printf("Do While %d\n", a);
    } while (a != 0);

    printf("\n");
    printf("Task 2\n");
    for (int j = 0; j < 8; j++)
    {
        s[j] = r;
        s[8] = '\0';
        printf("S: %s\n", s);
    }

    printf("-------------\n");
    while (a != sizeArray)
    {
        string[a] = r;
        string[8] = '\0';
        printf("In while %s\n", string);
        ++a;
    }

    printf("-------------\n");
    do
    {
        a--;
        printf("In do-while %s\n", string1);
        string1[a] = r;
        string1[8] = '\0';
    } while (a != 0);

    printf("\n");
    printf("Task 3\n");
    for (int q = 0; q < sizeArray; q++)
    {
        printf(" %c ", string2[q]);
    }
    printf("\n");
    
    printf("-------------\n");
    while (a != sizeArray)
    {
        printf(" %c ", string2[a]);
        a++;
    }
    printf("\n");

    printf("-------------\n");
    a = 0;
    do
    {
        printf(" %c ", string2[a]);
        ++a;
    } while (a != sizeArray);
    

    

}

/*  1. Измените цикл for так, чтобы на экран выводились только четные числа от 2 до 18.
    Сделайте тоже самое при помощи двух других циклов

    2. Создайте строку длиной 8 символов и при помощи любого цикла заполните её символом "#"
        После чего отобразите на экран как строку. Помните про символ конца строки.

    3. Отобразите посимвольно на экран строку из задания 2 при помощи любого цикла.
        Это можно сделать зная количество элементов или до символова конца строки.
    4. Дополнительно для 2 и 3 задания повторить с двумя другими циклами*/
