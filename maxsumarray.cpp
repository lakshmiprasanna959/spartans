//max sum of contiguos sub array
#include<stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    int a[n],sum=0,p=INT_MIN,i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
        sum+=a[j];
        if(sum>p)
        p=sum;
        }
    }
    printf("%d\n",p);
    
    }
}
