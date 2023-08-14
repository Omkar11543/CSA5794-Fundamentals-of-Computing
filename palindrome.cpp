#include<stdio.h>
int main()
{
	int i,n,n1,rem,rev;
	printf("enter n");
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(n1==rev)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
}
