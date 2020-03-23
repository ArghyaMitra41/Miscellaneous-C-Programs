#include<iostream>
#define n 5
using namespace std;
template<class Type>

void bubblesort(Type a[])
{
    int i, j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                Type element;
                element = a[i];
                a[i] = a[j];
                a[j] = element;
            }
        }
    }
}
 
int main()
{
	char c[]={'v','b','g','a','e'};
    int in[]={6,4,1,2,3},i;
    double d[]={6.4,4.1,2.3,3.2,1.4};
    char s[]="Arghya";
    
    bubblesort(c);
	cout<<"\nSorted Character Array:\n";
    for(i=0;i<n;i++)
        cout<<c[i]<<"\t";
    
    bubblesort(in);
	cout<<"\nSorted Integer Array:\n";
    for(i=0;i<n;i++)
        cout<<in[i]<<"\t";
    
    bubblesort(d);
	cout<<"\nSorted Double Array:\n";
    for(i=0;i<n;i++)
        cout<<d[i]<<"\t";
    
    bubblesort(s);
	cout<<"\nSorted String Array:\n";
    for(i=0;i<n;i++)
        cout<<s[i]<<"\t";
    return 0;
}
