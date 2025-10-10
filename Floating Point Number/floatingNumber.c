#include<stdio.h>
int main (){
    float x;
    if (scanf("%f",&x)!=1 ){
        printf("In valid input\n");
    }else{
        printf("%.3f",x);
    }

    return 0;
}