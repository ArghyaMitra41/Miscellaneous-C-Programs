#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		A();
		A(int);
		A operator+(A);
		A operator-(A);
		A operator++();
		A operator++(int);
		A operator=(A);	
		A operator+(int);
		friend A operator+(int,A);
		
		
		friend ostream &operator<<(ostream &out,const A &c)
		{
			out << c.a;
   			return out; 
		} 
    	friend istream &operator>>(istream &in,A &c)
    	{
    		in >> c.a;
   			return in;
		}
		
		
		void show();
};

A::A() {a=0;}
A::A(int aa) {a=aa;}
void A::show() {cout<<a<<endl;}

A A::operator+(A ob)
{
	return(A(a+ob.a));
}

A A::operator-(A ob)
{
	return(A(a-ob.a));
}

A A::operator++()
{
	a++;
	return (A(a));
}

A A::operator++(int x)
{
	a++;
	return (A(a));
}

A A::operator=(A ob)
{
	a=ob.a;
	return(A(ob.a));
}

A A::operator+(int x)
{
	a+=x;
	return (A(a));
}

A operator+(int x,A ob)
{
	ob.a+=x;
	return (A(ob.a));
}

/*ostream & operator << (ostream &out, const A &c) 
{ 
    out << c.a;
    return out; 
} 
  
istream & operator >> (istream &in,  A &c) 
{ 
    in >> c.a;
    return in; 
} */

int main()
{
	A a(20),b(10),c(15),d;
	d=a+b-c;
	d.show();
	++d;
	d.show();
	d++;
	d.show();
	d=a;
	d.show();
	d=d+10;
	d.show();
	d=10+d;
	d.show();
	cout<<"Enter the value of object d: ";
	cin>>d;
	cout<<d;
	return 0;
}
