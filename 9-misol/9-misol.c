#include <stdio.h>
#include <ctype.h>
#include<string.h>

void password(char arr[])
{
    // passwordni ishonchliligini tikshirib beruvchi function

    int count = 0, count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (islower(arr[i]))
        {
            count++;
        }else if(isupper(arr[i])){
            count1++;
        }else if(ispunct(arr[i])){
            count2++;
        }else if(isdigit(arr[i])){
            count3++;
        }
    }
    if (count && count1 && count2 && count3 && (strlen(arr) - 1 >= 8))
    {
        printf("Parol xavfsiz");
    }
    else
    {
        printf("Parol xavfsiz emas");
    }
}
int main()
{
    char arr[100];

    printf("Passwordni kiriting: ");
    scanf("%s", arr);

    password(arr);
}