#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("%d is an leap year", year);
    }
    else
    {
        printf("%d is NOT leap year", year);
    }
    
    
    return 0;
}