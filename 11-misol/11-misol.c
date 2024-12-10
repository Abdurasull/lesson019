#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char arr[100], arr2[100];

    printf("1-matinni kiriting: ");
    scanf("%s", arr);

    printf("2-matinni kiriting: ");
    scanf("%s", arr2);

    if (!strcmp(arr, arr2))
    {
        printf("Berilgan matnlar teng.");
    }else
    {
        printf("Berilgan matnlar teng emas.");
    }
    
    

}