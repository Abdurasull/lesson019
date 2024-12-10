#include <stdio.h>

void max_count_alpha(char arr[])
{ // Eng ko`p qatnashgan belgini topish  functioni

    printf("result: \n");
    int count = 0, index = 0, count_max = 0, max_index = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        for (int j = 0; arr[j] != '\0'; j++)
        {
            if (arr[i] == arr[j])
            {
               count++;
               index = j;
            }           
        }
        if (count > count_max)
        {
            count_max = count;
            max_index = index;
        }
        count = 0;
        
    }
    printf("Eng kop qatnashgan harf '%c', %d marta", arr[max_index], count_max);
}

int main()
{
    char arr[100];

    printf("matnni kiriting: \n");

    fgets(arr, sizeof(arr), stdin);

    max_count_alpha(arr);
}