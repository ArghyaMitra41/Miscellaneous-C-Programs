#include <stdio.h>
int maker(int d[100000000],int n)
{
	int i,j,count=0;
	for(i=1;i<=n;i++)
	{
		d[i]=0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j%i==0)
			{
				if(d[j]==0)
					d[j]=1;
				else
					d[j]=0;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		if(d[i]==1)
			count++;
	}
	return count;
}
int main() {
	int n,d[100000],o[100],i,j;
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
		scanf("%d",&n);
		o[i]=maker(d,n);
	}
	for(i=1;i<=j;i++)
		printf("\n%d",o[i]);
	return 0;
}
