#include<iostream>
#define PI 3.1416
using namespace std;

template<class Type> class Circle
{
	Type radius;
	public:
		Circle();
		Circle(Type);
		void area();
};

template<class U> Circle<U>::Circle()
{
	radius=0;
}

template<class U> Circle<U>::Circle(U x)
{
	radius=x;
}

template<class V> void Circle<V>::area()
{
	cout<<"Area of Circle with radius "<<radius<<" = "<<PI*radius*radius<<endl;
}

int main()
{
	Circle<int> c1(3);
	Circle<double> c2(3.2);
	Circle<int> c3;
	c1.area();
	c2.area();
	c3.area();
}
