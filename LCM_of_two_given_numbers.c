#include<stdio.h>
int main()
{
    int i,a,b,res;
    scanf("%d%d",&a,&b);
    for(i=1;i ;i++)
    {
        res=b*i;
        if(res%a==0)
        break;
    }
    printf("%d",res);
    
}