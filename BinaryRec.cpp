#include<stdio.h>

int binarysearch(int A[10],int l,int h,int k)
{
	if(h>=l)
	{
		int mid=l+(h-l)/2;
		if(A[mid]==k)
			return mid;
		if(A[mid]>k)
			return (binarysearch(A,l,mid-1,k));
		return (binarysearch(A,mid+1,h,k));
	}
	return -1;
}

int main()
{
	int n,A[10],i,k;
	printf("\nEnter the size of array: ");
	scanf("%d",&n);
	printf("\nEnter the array: ");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("\nEnter the element to be searched: ");
	scanf("%d",&k);
	int j=binarysearch(A,0,n-1,k);
	if(j==-1)
		printf("\nElement Not found");
	else
		printf("\nElement Found");
	return 0;
}
