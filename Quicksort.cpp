#include<stdio.h>

int partition(int A[10],int p,int r)
{
	int i=p-1,j;
	int temp;
	for(j=p;j<=(r-1);j++)
	{
		if(A[j]<A[r])
		{
			i++;
			temp=A[i];
			A[i]=A[j];
			A[j]=temp;
		}
	}	
	temp=A[r];
	A[r]=A[i+1];
	A[i+1]=temp;
	return (i+1);
}
void quicksort(int A[10],int p,int r)
{
	if(p<r)
	{
		int q=partition(A,p,r);
		quicksort(A,p,q-1);
		quicksort(A,q+1,r);
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
	quicksort(A,0,n);
	printf("\nSorted array: ");
	for(i=1;i<=n;i++)
		printf("%d  ",A[i]);
	return 0;
}
