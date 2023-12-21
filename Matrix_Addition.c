#include<stdio.h>
int main()
{
	int i,j,r,c;
	scanf("%d%d",&r,&c);
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int r1,c1;
	scanf("%d%d",&r1,&c1);
	int a[r1][c1];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	if(r==r1 && c==c1)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
	     	printf("%d ",arr[i][j]+a[i][j]);
	        }
	        printf("
");
	    }
	}
	else
	{
		printf("Not Possible");
	}
}