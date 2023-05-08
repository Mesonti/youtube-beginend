#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    char a[10] = "абв";

    gets(a);
    OemToChar(a, a);
    printf("After translation %s\n", a);

    return 0;
}