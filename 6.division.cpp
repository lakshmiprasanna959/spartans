//6)Division without using '/' operator
#include<stdio.h>
int main(){
	long long int i,div,did,var=0,q=0;
	scanf("%lld%lld",&did,&div);
	for(i=9;i>=0;i--)
	{
		if(var+(div<<i)<=did)
		{
			var=var+(div<<i);
			q=q|(1<<i);
		}
	}
	printf("%lld",q);
}
