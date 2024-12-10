#include<stdio.h>

void count_number(char arr[]){// numberlar nechta qatnashganini sanovchi function
    int count = 0;
    for (int  i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
        {
            count++;
        }
        
    }
    printf("Raqamlar soni %d ta ekan", count);
    
}
int main(){
    char arr[100];
    printf("Matinni kiriting: ");
    fgets(arr, sizeof(arr), stdin); //matinimizni e`lon qilish functio ni

    count_number(arr); 
}