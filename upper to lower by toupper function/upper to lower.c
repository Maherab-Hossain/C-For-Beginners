#include<stdio.h>
int main(){
    char user_upper_value, lower_result;

    printf("Enter any upper letter: ");
    scanf("%c",&user_upper_value);

    lower_result = tolower(user_upper_value);

    printf("The lower letter:%c \n",lower_result); //Use 'toupper' to find the result of  lower to upper

    printf("\nCode By Maherab");
    return 0;
}
