//Reach the field
#include<stdio.h>
int main()
{
	int n,b,a[100],i,j,sum=0,count=0;
	scanf("%d%d",&n,&b);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(sum+a[i]<=b)
		sum+=a[i];
		else
		count++;
		
	}
	printf("%d",count);
}
