#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10];
	int r1,r2,c1,c2,i,j,k;
	printf("no.of rows of mat1:");
	scanf("%d",&r1);
	printf("no.of columns of mat1: ");
	scanf("%d",&c1);
	printf("no.of rows of mat 2 ");
	scanf("%d",&r2);
	printf("no.of columns of mat 2: ");
	scanf("%d",&c2);
	if(r1==r2 ||c1==c2)
	{
		printf("enter first matrix is: ");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter second matrix is: ");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				mul[i][j]=0;
				for(k=0;k<c1;k++)
				{
				mul[i][j]+=a[i][k]*b[k][j];
			    }
			}
		}
		printf("mul of the two matrices is: \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d ",mul[i][j]);
			}
			printf("\n");
		}
    }
}
