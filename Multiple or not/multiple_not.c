#include<stdio.h>
int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    if (a==0 || b==0){
         printf("No");
    }
    else if (a%b==0 || b%a==0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}