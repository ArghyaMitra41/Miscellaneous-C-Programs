#include<iostream>
#include<map>
using namespace std;

class Student
{
	string name;
	int age;
	public:
		Student();
		Student(string,int);
		void showInfo();	
};

Student::Student() {name="Arghya"; age=20;}
Student::Student(string s,int x) {name=s; age=x;}
void Student::showInfo()
{
	cout<<"Name: "<<name<<" Age: "<<age<<endl;
}

void show(map<string,Student> &mp)
{
	for(map<string,Student>::iterator itr=mp.begin();itr!=mp.end();itr++)
	{
		cout<<"Roll: "<<itr->first;
		itr->second.showInfo();
	}
	cout<<endl;	
}

int main()
{
	int i;
	string roll,name;
	int age;
	map<string,Student> mp;
	for(i=0;i<5;i++)
	{
		cout<<"Enter Roll, Name & Age: ";
		cin>>roll>>name>>age;
		mp.insert(pair<string,Student>(roll,Student(name,age)));
	}
	show(mp);
	string ch;
	cout<<"Enter the roll number to be searched: ";
	cin>>ch;
	map<string,Student>::iterator itr=mp.begin();
	mp.find(ch);
	if(itr!=mp.end())
	{
		cout<<"Student Found";
		itr->second.showInfo();
	}
	else
		cout<<"Element Not Found";
	return 0;
}
