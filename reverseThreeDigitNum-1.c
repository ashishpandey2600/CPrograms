#include<stdio.h>
int main(void)
{
    int num,num1,num2,num3,num4,reverse;
    printf("ENTER THE NUM\n");
    scanf("%d",&num);
    num1=num%10;//last nuber 789 we get 9
    num2=num/100;//first number we get 7
    num3=num%100;//last two no. we get 89
    num4=num3/10;//we get middle that is eight
    reverse=(num1*100)+num4*10+num2;
    printf("reverse is %d",reverse);
    return 0;
}