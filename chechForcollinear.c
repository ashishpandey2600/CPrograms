#include<stdio.h>
int main(void)
{
    float slopeAb,SlopeBc,SlopeCa,x1,x2,x3,y1,y2,y3;
    printf("Enter the cordinates  (X1,Y1) :");
    scanf("%f   %f"  , &x1,&y1);
    printf("\nEntert he cordinates (X2,Y2)  :");
    scanf("%f   %f", &x2,&y2);
    printf("Entert he cordinates (X3,Y3)  :");
    scanf("%f    %f", &x3,&y3);
    slopeAb=(y2-y1)/(x2-x1);
    SlopeBc=(y3-y2)/(x3-x2);
    SlopeCa=(y1-y3)/(x1-x3);
    if (slopeAb== SlopeBc==SlopeCa)
    {
      printf("Points are in Straight Line");
    }
    else
    {
        printf("Points are not in Straight Line");
    }
    
    
    return 0;
}