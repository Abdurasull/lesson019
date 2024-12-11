#include<stdio.h>
#include<string.h>

void palindrom(char arr[]){
    //palindromlikga tekshiruvchi function
    int lenght = strlen(arr) - 1, count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == arr[lenght - i - 1])
        {
            count++;
        }
        
    }
    if (count == lenght)
    {
        printf("True");
    }else
    {
        printf("false");
    }  
}
int main(){
    char arr[100];

    printf("So`zni kiriting: ");

    fgets(arr, sizeof(arr), stdin);

    palindrom(arr);
}