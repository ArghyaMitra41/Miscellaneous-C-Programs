#include<iostream>
using namespace std;

int isprime(int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			count++;
	}
	if(count<=2)
		return 1;
	else
		return 0;
}

int main()
{
	long double a[100];
	int i,n,k=1;
	for(i=2;i<=100;i++)
	{
		if(isprime(i)==1)
			{
				a[k]=i;
				k++;
			}
	}
	cout<<"\nEnter value of n: ";
	cin>>n;
	cout<<n<<"th prime is: "<<a[n];
	return 0;
}
