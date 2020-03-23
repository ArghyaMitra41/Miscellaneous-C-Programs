#include<iostream>
using namespace std;
class SimpleCircle
{
	double radius;
	public:
		SimpleCircle();
		SimpleCircle(int);
		void show();
		SimpleCircle operator++();
		SimpleCircle operator--();
		SimpleCircle operator=(SimpleCircle);
		~SimpleCircle();
};
SimpleCircle::~SimpleCircle(){}

SimpleCircle::SimpleCircle()
{
	radius=0;
}

SimpleCircle::SimpleCircle(int x)
{
	radius=x;
}

void SimpleCircle::show()
{
	cout<<radius<<endl;
}

SimpleCircle SimpleCircle::operator++()
{
	radius++;
	return *this;
}

SimpleCircle SimpleCircle::operator--()
{
	radius--;
	return *this;
}

SimpleCircle SimpleCircle::operator=(SimpleCircle s1)
{
	radius=s1.radius;
	return *this;
}

int main()
{
	SimpleCircle ob1,ob2(9);	
	ob1.show();
	++ob1;
	ob1.show();
	
	ob2.show();
	++ob2;
	ob2.show();
	
	ob1=ob2;
	ob1.show();
	
	return 0;
}
