#include<stdio.h>
#include<time.h>
int main(){
	time_t ct;
	time(&ct);
	
	struct tm*localTime=localtime(&ct);
	printf("Current date:%02-%02-%04d\n",localTime->tm_mday,localTime->tm_mon+1,localTime->tm_year+1900);
	return 0;
	}