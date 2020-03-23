#include<iostream>
using namespace std;
class Sample
{
	int aa;
	public:
		Sample();
		Sample(int);
		void show();
		Sample operator+(int);
		friend Sample operator+(int,Sample);
		~Sample();
};
Sample::~Sample(){}

Sample::Sample()
{
	aa=0;
}

Sample::Sample(int x)
{
	aa=x;
}

void Sample::show()
{
	cout<<aa<<endl;
}

Sample Sample::operator+(int x)
{
	return (Sample(aa+x));
}

Sample operator+(int x,Sample ob)
{
	return (Sample(ob.aa+x));
}

int main()
{
	Sample s1(10),s2,s3;
	
	s1.show();
	s2=s1+10;
	s2.show();
	
	s3.show();
	s3=10+s1;
	s3.show();
	
	return 0;
}
