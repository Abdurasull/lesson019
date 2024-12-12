#include<stdio.h>
#include<string.h>


void teskari_function(char arr[]){
    //Matinni teskari o`qiydigan function
    int length = strlen(arr) - 1;
    char arr1[100], arrx[100] = {};
    printf("Result: ");
    int k = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        arr1[k] = arr[i];
        if (arr[i] == ' ')
        {
            for (int j = strlen(arr1) - 1; j >= 0; i--)
            {
                putchar(arr1[j]);
            }
            k = 0;
            arr1[100];
        }   
    }
}

int main(){
    char arr[100];

    printf("Matinni kiriting: ");
    fgets(arr, sizeof(arr), stdin);
    teskari_function(arr);
}