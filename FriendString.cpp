#include<iostream>
#include<cstring>
using namespace std;

class String2;
class String1
{
	public:
		char str1[20];
		String1();
		void setData(char *);
		void print();
		int compare(String1);
		friend void compare12(String1,String2);
		~String1();
};

class String2
{
	public:
		char str2[20];
		String2();
		void setData(char *);
		void print();
		int compare(String2);
		friend void compare12(String1,String2);
		~String2();
};

String1::String1() {char st[20]="Arghya"; strcpy(str1,st);}
String2::String2() {char st[20]="Arghya"; strcpy(str2,st);}
String1::~String1(){}
String2::~String2(){}
void String1::setData(char *st) {strcpy(str1,st);}
void String2::setData(char *st) {strcpy(str2,st);}

void String1::print()
{
	for(int i=0;i<strlen(str1);i++)
		cout<<str1[i];
	cout<<endl;
}
void String2::print()
{
	for(int i=0;i<strlen(str2);i++)
		cout<<str2[i];
	cout<<endl;
}

int String1::compare(String1 s)
{
	int z=strcmp(str1,s.str1);
	if(z!=0)
		return 0;
	else
		return 1;
}
int String2::compare(String2 s)
{
	int z=strcmp(str2,s.str2);
	if(z!=0)
		return 0;
	else
		return 1;
}

void compare12(String1 s1,String2 s2)
{
	if(strcmp(s1.str1,s2.str2)==0)
		cout<<"String Matched";
	else
		cout<<"String Not Matched";
}

int main()
{
	String1 s1,s3;
	String2 s2;
	s1.setData("Arghya");
	s2.setData("Bikram");
	cout<<s1.compare(s3)<<endl;
	compare12(s1,s2);
	return 0;
}
