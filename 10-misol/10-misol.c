#include <stdio.h>
#include <ctype.h>
#include <string.h>

void change(char arr[])
{
    // Barcha "-" chiziqlarni " " bo`sh joy bn almashuvchi function
    printf("result: \n");
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == '-')
        {
            arr[i] = ' ';
        }

        putchar(arr[i]);
                
    }
    
}
int main()
{
    char arr[100];

    printf("matinni kiriting: ");
    scanf("%s", arr);

    change(arr);
}