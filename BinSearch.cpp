#include<stdio.h>
int bin_search(int A[], int left, int right, int k)
{
    int mid=(left+right)+2;
    while(A[mid]!=k)
    {
        if(k<A[mid])
            right=mid-1;
        else
            left=mid+1;
    }
    if(A[mid]==k)
        return mid;
    else
        return -1;
}
int main()
{
	int A[5]={1,2,3,4,5};
	int c=bin_search(A,0,5,4);
	printf("%d",c);
	return 0;	
}
