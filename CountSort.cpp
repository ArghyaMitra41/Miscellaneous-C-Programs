#include<stdio.h>

int max(int A[10],int n)
{
	int max=0,i;
	for(i=1;i<=n;i++)
	{
		if(A[i]>max)
			max=A[i];
	}
	return max;
}

void countsort(int A[10],int n)
{
	int c[50]={0},i,j;
	int max1=max(A,n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=max1;j++)
		{
			if(A[i]==j)
				c[j]++;
		}
	}
	printf("\nSorted array: ");
	for(i=0;i<=max1;i++)
	{
		if(c[i]!=0)
		{
			for(j=c[i];j>0;j--)
			{
				printf("%d ",i);
			}
		}
	}
}

int main()
{
	int A[10],n,i;
	printf("\nEnter the size of array: ");
	scanf("%d",&n);
	printf("\nEnter the array: ");
	for(i=1;i<=n;i++)
		scanf("%d",&A[i]);
	countsort(A,n);
/*	printf("\nSorted array: ");
	for(i=1;i<=n;i++)
		printf("%d  ",A[i]);*/
	return 0;
}
