#include<stdio.h>
#include<string.h>

void count_word(char arr[]){
    //matinda nechta so`z borligini topuvchi dastur
    int count = 1;
    for (int i = 0; i < strlen(arr)-1; i++)
    {
        if (arr[i] != ' ' && arr[i+1] == ' ')
        {
            count++;
        }   
    }
    printf("so`zlar soni %d ta", count);
}

int main(){
    char arr[100];

    printf("Matinni kiriting: ");

    fgets(arr, sizeof(arr), stdin);
    

    count_word(arr);
}