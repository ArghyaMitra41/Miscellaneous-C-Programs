#include<iostream>
using namespace std;

class A
{
	protected:
		int a;
	public:
		A();
		void setA(int);
		void showA();
};

class B : public A
{
	protected:
		int b;
	public:
		B();
		void setB(int);
		void showB();
};

A::A() {a=0;}
B::B() {b=0;}

void A::setA(int aa) {a=aa;}
void B::setB(int bb) {b=bb;}

void A::showA() {cout<<"a = "<<a<<endl;}
void B::showB() {cout<<"b = "<<b<<endl;}

int main()
{
	B b1;
	b1.showA();
	b1.setA(10);
	b1.showA();
	return 0;
}
