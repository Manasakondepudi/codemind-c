#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    y=(x+5)/10;
    if(x%10==0)
    {
        printf("%d",y);
    }
    else if(x%5==0)
    {
        printf("%d",y);
    }
    else
    {
        printf("-1");
    }
}