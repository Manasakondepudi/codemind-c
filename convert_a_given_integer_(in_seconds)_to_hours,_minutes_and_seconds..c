#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int hours,min,sec;
    hours=(t%86400)/(60*60);
    min=(t%3600)/60;
    sec=(t%60);
    printf("H:M:S-%d:%d:%d",hours,min,sec);
}