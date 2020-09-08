#include<stdio.h>
#include<limits.h>
int main() {
int n=8,a[8]={10,-3,-4,7,6,5,-4,-1},i,count=0,j;
int p=2*n;
int b[16],sum=0,max=INT_MIN;
for(i=0;i<n;i++)
{
  b[i]=b[i+n]=a[i];
}
for(i=0;i<n;i++)
{
  sum=0;
  count=0;
  for(j=i;count<n;j++)
  {
    sum+=b[j];
    if(sum>max)
    max=sum;
    count++;
  }
}
printf("%d",max);
  return 0;
}
