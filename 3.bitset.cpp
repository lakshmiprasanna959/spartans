//3) program to find whether 5th bit is set or not
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n&(1<<4))
	printf("set");
	else
	printf("not set");
}

