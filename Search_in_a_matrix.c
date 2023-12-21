#include<stdio.h>
int main()
{
	int r,c,flag=0;
	scanf("%d%d",&r,&c);
	int arr[r][c],i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int s;
	scanf("%d",&s);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(s==arr[i][j])
			{
			    flag=1;
			}
		}
	}
	if(flag==1)
	{
	    printf("1");
	}
	else
	{
	    printf("0");
	}
}