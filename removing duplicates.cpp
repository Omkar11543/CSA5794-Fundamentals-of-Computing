#include<stdio.h>
int main()
{
	int i,n,a[10],j,k;
	printf("enter the no.of elements: ");
	scanf("%d",&n);
	printf("enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	printf("array after deleting duplicates is :");
    for(i=0;i<n;i++)
    {
    	printf("%d\n",a[i]);
	}
}
