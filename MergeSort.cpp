#include<stdio.h>

int merge(int A[10],int p,int q,int r)
{
	int i,j,k,L[10],R[10];
	int n1=q-p+1;
	int n2=r-q;
	for(i=1;i<=n1;i++)
		L[i]=A[p+i-1];
	for(j=1;j<=n1;j++)
		R[j]=A[q+j];
	L[n1+1]=9999;
	R[n2+1]=9999;
	i=j=1;
	for(k=p;k<=r;k++)
	{
		if(L[i]<R[j])
		{
			A[k]=L[i];
			i++;
		}
		else
		{
			A[k]=R[j];
			j++;
		}
	}
}
void mergesort(int A[10],int p,int r)
{
	if(p<r)
	{
		int q=(p+r)/2;
		mergesort(A,p,q);
		mergesort(A,q+1,r);
		merge(A,p,q,r);
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
	mergesort(A,0,n);
	printf("\nSorted array: ");
	for(i=1;i<=n;i++)
		printf("%d  ",A[i]);
	return 0;
}
