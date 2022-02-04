#include <stdio.h>
void main()
{
    float PerHeight;
 
    printf("Input the height of the person (in centimetres) :");
    scanf("%f", &PerHeight);
    if (PerHeight < 150)
        printf("Low \n");
    else if ((PerHeight >= 150) && (PerHeight < 180))
        printf("Average \n");
    else if (PerHeight >= 180)
        printf("High \n");
}