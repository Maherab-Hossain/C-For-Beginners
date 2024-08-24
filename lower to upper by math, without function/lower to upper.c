#include<stdio.h>
int main(){
    char user_lower_value;

    printf("Enter any lower letter: ");
    scanf("%c",&user_lower_value);

    printf("The upper letter:%c \n",user_lower_value-32); // Use '+' to find the result of  upper to lower

    printf("\nCode By Maherab");
    return 0;
}
