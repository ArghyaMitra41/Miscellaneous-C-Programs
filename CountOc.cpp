#include<iostream>
#include<vector>
using namespace std;

struct Pair
{
	char str;
	int cnt;
};

vector<Pair> Pairs;

int CountOc(char ch)
{
	int i;
	for(i=0;i<Pairs.size();i++)
	{
		if(ch==Pairs[i].str)
		{
			Pairs[i].cnt++;
			break;
		}	
	}
	if(i==Pairs.size())
	{
		Pair p={ch,1};
		Pairs.push_back(p);
	}
}

int main()
{
	char ch;
	while(cin>>ch)
		CountOc(ch);
	for(int i=0;i<Pairs.size();i++)
		cout<<Pairs[i].str<<" appears "<<Pairs[i].cnt<<" times"<<endl;
	return 0;
}
