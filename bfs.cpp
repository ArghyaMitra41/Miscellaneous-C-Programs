#include<iostream>
#define white 0
#define grey 1
#define black 2
#define M 10

int c[M],d[M],p[M],n,front=-1,rear=-1;

void enqueue(int Q[M],int k)
{
	if(rear==n-1 && front==0)
	{
		printf("\nQUEUE FULL");
		return;
	}
	if(front==-1 || rear==-1)
	{
		front=0;
		rear=0;
	}
	Q[rear++]=k;
}

int dequeue(int Q[M])
{
	int element;
	if(front==rear+1 || front==-1)
	{
		printf("\nQUEUE EMPTY");
		return(9999);
	}
	element=Q[front];
	front++;
	return element;
}

void bfs(int G[M][M],int s)
{
	int i,u,Q[M]={0};
	for(i=0;i<n;i++)
	{
		if(i==s)
			continue;
		c[i]=white;
		d[i]=9999;
		p[i]=-1;
	}
	c[s]=grey;
	d[s]=0;
	p[s]=-1;
	enqueue(Q,s);
	while(front==-1 || front!=rear+1)
	{
		u=dequeue(Q);
		for(i=0;i<n;i++)
		{
			if(G[u][i]==0)
				continue;
			if(c[i]==white)
			{
				c[i]=grey;
				p[i]=u;
				d[i]=d[u]+1;
				enqueue(Q,i);
			}
		}
	c[u]=black;
	}
}

main()
{
	int i,j,G[M][M],s;
	printf("\nEnter the no. of vertices: ");
	scanf("%d",&n);
	printf("\nEnter the adjacency matrix: ");
	for(i=0;i<n;i++)
	{
		for(j=1;j<=n;j++)
			scanf("%d",&G[i][j]);
	}
	printf("\nEnter the source vertex: ");
	scanf("%d",&s);
	bfs(G,s);
	printf("\nParent:\n");
	for(i=0;i<n;i++)
		printf("%5d",p[i]);
	printf("\nDistance:\n");
	for(i=0;i<n;i++)
		printf("%5d",d[i]);
}
