#include<iostream>
#define pi 3.1416
using namespace std;

template<class Type> class Circle
{
	Type radius;
	public:
		Circle();
		Circle(Type);
		void area();
};

template<class Type>Circle<Type>::Circle() {radius=0;}
template<class Type>Circle<Type>::Circle(Type r) {radius=r;}
template<class Type>void Circle<Type>::area() {cout<<"Area: "<<(pi*radius*radius)<<endl;}

int main()
{
	Circle<int> a;
	Circle<int> b(5);
	Circle<double> c(4.3);
	a.area();
	b.area();
	c.area();
	return 0;
}
