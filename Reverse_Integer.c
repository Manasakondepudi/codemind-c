#include<stdio.h>
int main()
{
    int r=0,n;
    scanf("%d",&n);
    while(n!=0)
    {
        r=r*10+n%10;
        n=n/10;
    }
     printf("%d",r); 
}