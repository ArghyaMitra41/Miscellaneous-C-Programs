#include<iostream>
using namespace std;
class Simple
{
	int aa;
	public:
		Simple();
		Simple(int);
		void show();
		Simple operator+(Simple);
		Simple operator-(Simple);
		~Simple();
};
Simple::~Simple(){}

Simple::Simple()
{
	aa=0;
}

Simple::Simple(int x)
{
	aa=x;
}

void Simple::show()
{
	cout<<aa<<endl;
}

Simple Simple::operator+(Simple s1)
{
	return (Simple(aa+s1.aa));
}

Simple Simple::operator-(Simple s1)
{
	return (Simple(aa-s1.aa));
}

int main()
{
	Simple a(10),b(20),c(30),d;	
	a.show();
	b.show();
	c.show();
	d=a+b-c;
	d.show();
	return 0;
}
