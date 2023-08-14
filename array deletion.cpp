#include<stdio.h>
int main()
{
	int a[10],pos,size,i,n;
	printf("enter the no.of elements: ");
	scanf("%d",&n);
	printf("enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position to delete: ");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	printf("elements of the array after deleting:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
