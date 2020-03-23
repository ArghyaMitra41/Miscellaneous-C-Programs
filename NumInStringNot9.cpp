#include<stdio.h>
#include<ctype.h>
int main()
{
    int t;
	long long int i,j;
    char s[10000];
    long long int n[10000];
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%s",s);
	    for(i=0;s[i]!='\0';i++)
	    {
	    	if(isdigit(s[i])!=0 && s[i]!=9)
	    	{
	    		while(s[i]!=' ')
	    		{
	    			n[i]=s[i];
	    			i++;
				}
				n[i]=9;
			}		
	    	else
	    		i++;
		}
	}
	for(j=0;j<i;j++)
		printf("%d",n[j]);
	return 0;
}
