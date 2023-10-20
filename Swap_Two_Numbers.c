#include<stdio.h>
int main()
{
    int temp,a,b;
    scanf("%d%d",&a,&b);
    temp=b;
    b=a;
    a=temp;
    printf("%d
%d",a,b);
}