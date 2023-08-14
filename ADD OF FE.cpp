#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<=n;i+=2)
	{
		if(i%3==0)
		{
			sum=sum+i;
		}
	}
	printf("The sum is:%d",sum);
}