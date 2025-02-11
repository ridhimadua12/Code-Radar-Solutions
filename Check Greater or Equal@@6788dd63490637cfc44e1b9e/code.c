#include <stdio.h>
int main (){
    int first_digit;
    int second_digit;
    scanf ("%d%d",&first_digit,&second_digit);
    if (first_digit>second_digit){
        printf("Yes\n");}
        else if (first_digit==second_digit){
            printf("Equal");
        }
        else{
            printf("No\n");
        }
        return 0;
    }


