#include <stdio.h>
#include <string.h>

void count_word_max(char arr[])
{
    // matinda max so`z va min so`zni topuvchi function
    int max = 0, min = 1, count = 0;
    for (int i = 0; i < strlen(arr) - 1; i++)
    {
        if (arr[i] != ' ')
        {
            count++;
        }else
        {
          min = (count <= min) ? count : min;
          max = (count >= max) ? count : max;
        }
        
    }
    printf("so`zlar soni %d ta", count);
}

int main()
{
    char arr[100];

    printf("Matinni kiriting: ");

    fgets(arr, sizeof(arr), stdin);

    count_word(arr);
}