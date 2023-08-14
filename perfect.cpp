#include<stdio.h>
int main()
{
	int i,num,sum=0,n1;
	printf("enter the number: ");
	scanf("%d",&num);
	n1=num;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(n1==sum)
	{
		printf("perfect number");
	}
	else
	{
		printf("not a perfect number: ");
	}
}
