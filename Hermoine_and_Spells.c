#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d",&a,&b,&c);
    d=a+b;
    e=a+c;
    f=b+c;
    if(c<a && c<b)
    {
        printf("%d",d);
    }
    else if(b<a && b<c)
    {
        printf("%d",e);
    }
    else
    {
        printf("%d",f);
    }
}