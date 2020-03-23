#include<iostream>
using namespace std;

class MyException
{
	string msg;
	int n;
	public:
		MyException();
		MyException(string,int);
		void showMsg();
};

MyException::MyException() {msg="Arghya"; n=0;}
MyException::MyException(string s,int x) {msg=s; n=x;}

void MyException::showMsg()
{
	cout<<n<<" "<<msg<<endl;
}

int main()
{
	try {
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	if(n==0)
		throw "n is zero";
	if(n<10)
		throw MyException("is small",n);
	cout<<n;
	}
	catch(MyException ex)
	{
		ex.showMsg();
	}
	catch(const char* c)
	{
		cout<<c;
	}
	catch(...)
	{
		cout<<"Exception Occurred";
	}
}
