#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,r,c;
	printf("Enter the no rows :");
	scanf("%d",&r);
	printf("Enter the columns:");
	scanf("%d",&c);
	printf("Enter the elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	printf("The trasnpose matrix is:");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",b[i][j]);
			if(j==r-1)
			printf("\n");
		}
	}
	return 0;
}