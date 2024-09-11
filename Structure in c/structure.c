#include<stdio.h>

struct persion{
    int age;
    float salary;
};
int main (){
    struct persion pr1,pr2;
    pr1.age=23;
    pr1.salary=2300.23;

    printf("Age = %d\n",pr1.age);
    printf("Salary = %.2f\n",pr1.salary);
   return 0;
}
