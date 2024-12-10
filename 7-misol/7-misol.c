#include <stdio.h>
#include<ctype.h>


void Undosh_alpha(char arr[], char arr2[]){
    //unli harflar nichta ishtirok etganini topadiga function
    
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        for (int j = 0; arr2[j] != '\0'; j++)
        {
            if(arr[i] == tolower(arr2[j]))
            count++;
        }
        if (count != 0)
        {
            printf("%c harf %d marta qatnashgan \n", arr[i], count);
        }
        count = 0;
    }
}
int main(){
    char arr[6] = "aeuio";

    char arr2[100];

    fgets(arr2, sizeof(arr2), stdin);

    Undosh_alpha(arr, arr2);
}