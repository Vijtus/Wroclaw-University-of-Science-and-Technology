#include <stdio.h>
int main(void)
{
    int d1[3], d2[3], i, res=0;
    printf("Please enter first date: (dd/mm/rr):");
    scanf("%d/%d/%d", &d1[2],&d1[1],&d1[0]);
    printf("Please enter second date: (dd/mm/rr):");
    scanf("%d/%d/%d", &d2[2],&d2[1],&d2[0]);

    for(i = 0; (i < 3) && (res==0); i++)
        res = d1[i] - d2[i];
    if (res == 0)
        puts("Dates are equal");
    else if(res < 0)
       printf("First date is earlier");
    else
      printf("Second date is earlier");
    return 0;
}