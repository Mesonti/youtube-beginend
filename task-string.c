#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#include <winuser.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    char a[10] = "абв";
    

    gets(a);
    OemToChar(a, a);
    printf("After translation %s\n", a);
    
    return 0;
}