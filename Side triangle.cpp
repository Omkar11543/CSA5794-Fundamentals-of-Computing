#include<stdio.h>
int main (){
	int i,j,k=1,n=5;
	for (i=1;i<=n*2-1;i++){
		for (j=1;j<=k;j++){
		printf("*");	
		}
		if(i>=n)
		k=k-1;
		else
		k=k+1;
	printf("\n");	
	}
}