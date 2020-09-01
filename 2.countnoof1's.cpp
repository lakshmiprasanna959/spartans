//2) program to count the number of 1's in binary representation of a number
#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	while(n)
	{
		n=n&(n-1);
		count++;
	}
	printf("%d",count);
}
