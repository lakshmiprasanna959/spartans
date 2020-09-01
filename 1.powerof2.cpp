//1) Program to find N is power of 2 or not!
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if((n & (n-1)==0))
	printf("power of 2");
	else
	printf("not power of 2");
}

