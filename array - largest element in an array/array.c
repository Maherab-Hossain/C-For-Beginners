#include<stdio.h>
int main (){
    int a[]={-99,4,100,31,89,-327,245};
    int max=a[0],i;
    for(i=1;i<7;i++){
    if(a[i>max])
    max=a[i];
    }
    printf("Largest element in an array: %d\n",max);
    printf("\nCode By Maherab");
    return 0;
}
