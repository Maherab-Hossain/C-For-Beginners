#include<stdio.h>
int main (){
    int m=14;
    int *pointer;
    pointer=&m;
    printf("%d\n",m);
    printf("%d\n",&m);
    printf("%d\n",pointer);
    printf("%d\n",*pointer);
    printf("%d\n",&pointer);
    return 0;
}
