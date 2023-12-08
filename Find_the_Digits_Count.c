#include<stdio.h>
int main()
{
    int d=0,r,i,n;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        d=d+1;
        n=n/10;
    }
    printf("%d",d);
}