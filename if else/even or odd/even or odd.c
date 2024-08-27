#include<stdio.h>
int main (){
    int input;
    printf("Enter the value to test: ");
    scanf("%d", &input);

    if(input % 2 == 0){
        printf("EVEN\n");
    }else{
    printf("ODD \n");
    }
    printf("\nCode By Maherab");
    return 0;
}
