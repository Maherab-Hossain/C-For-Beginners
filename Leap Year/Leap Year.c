#include<stdio.h>
#include<math.h>
int main (){
    int year;
    printf("Enter your year: ");
    scanf ("%d",&year);
    if(year%400 == 0)
    printf("Your year is leap year");
    else if(year%100 == 0)
    printf("your year is leap year");
     else if(year%4 == 0)
    printf("your year is leap year");
    else
        printf("Your year is not a leap year");
    return 0;

}
