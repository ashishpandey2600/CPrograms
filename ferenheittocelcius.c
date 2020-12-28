#include<stdio.h>
int main(void)
{
    float temp_celcius,temp_ferenheit;
    printf("Enter the temperature in degree ferenheit\n");
    scanf("%f",&temp_ferenheit);
    temp_celcius=(temp_ferenheit-32)/1.8;
    printf("%f is temperature in degree celcius",temp_celcius);
    return 0;
}