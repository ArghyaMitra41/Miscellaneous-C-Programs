#include<stdio.h>

void FloydWarshall(int d[10][10],int n)
{
	int i,j,k;
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(d[i][j]>d[i][k]+d[k][j])
					d[i][j]=d[i][k]+d[k][j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d  ",&d[i][j]);
		printf("\n");
	}
}

main()
{
	int d[10][10],n,i,j;
	printf("\nEnter the size of the length matrix: ");
	scanf("%d",&n);
	printf("\nEnter the length matrix: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&d[i][j]);
	}
	FloydWarshall(d,n);
}
