#include<stdio.h>
int main (){
    int x;

    printf("Persion age: ");
    scanf("%d",&x);

    if(x < 2){
       printf(" Infant \n");
    }else if (x <10){
        printf("child \n");
    }else if (x <20){
        printf("Teenage \n");
    }else if (x <30){
        printf("Adult \n");
    }else{
        printf("Old \n");
    }

    printf("\nCode By Maherab");
    return 0;

}
