//4)subsets
#include<stdio.h>
#include<math.h>
int main(){
	int n,i,a[10],j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<pow(2,n);i++)
	{
		printf("{");
		for(j=0;j<n;j++)
		{
			if(i|(1<<(j-1))==1)
			printf("%d",a[j-1]);
		}
		printf("}");
	}
}
