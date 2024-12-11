#include<stdio.h>
#include<string.h>


void teskari_function(char arr[]){
    //Matinni teskari o`qiydigan function
    int length = strlen(arr) - 1;
    printf("Result: ");
    for (int i = length - 1; i >= 0; i--)
    {
        putchar(arr[i]);
    }
    
}

int main(){
    char arr[100];

    printf("Matinni kiriting: ");
    fgets(arr, sizeof(arr), stdin);
    teskari_function(arr);
}