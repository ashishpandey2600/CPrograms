#include<stdio.h>
int main(void)
{
    float base_salary,gross_salary,DA,HRA,bonus;
    printf("Enter the base salary\n");
    scanf("%f",&base_salary);
    DA=base_salary*0.4;
    HRA=DA*0.8;
    bonus=HRA*0.25;
    gross_salary=base_salary+DA+HRA+bonus;
    printf("%f is gross salary",gross_salary);
    return 0;
}