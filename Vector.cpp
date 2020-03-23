#include<iostream>
#include<vector>
using namespace std;

void show(vector<int> &vt)
{
	for(vector<int>::iterator itr=vt.begin();itr!=vt.end();itr++)
		cout<<*itr<<" ";
	cout<<endl;
}

int main()
{
	vector<int> vt;
	int i;
	cout<<"Vector Size: "<<vt.size()<<endl;
	for(i=0;i<5;i++)
		vt.push_back(i+10);
	show(vt);
	vt.insert(vt.begin()+2,66);
	show(vt);
	vt.erase(vt.begin(),vt.end());
	show(vt);
	return 0;
}
