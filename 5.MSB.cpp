//5)Largest power of 2 i.e msb
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,k,s=1,p=1,j,a[10];
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	k=i;
	for(i=1;i<k;i++)
	{
		for(j=0;j<i;j++)
		{
			p=p*2;
		}
		s=s+p;
		p=1;
	}
	s=s+1;
	s=s/2;
	printf("%d",s);
}
