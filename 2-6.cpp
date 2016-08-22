#include <iostream>
#include <string>
#include <sstream>
#include <complex>
using namespace std;
int gcd1(int ,int);//最大公约数
int main(int argc, char const *argv[])
{
	double a= 0.234324;
	ostringstream strs;
	strs << a;
	string str = strs.str();
	cout<<str<<endl;
	cout<<str.size()<<endl;
	int a_=a*pow(10,str.size()-2);
	int b_=pow(10,str.size()-2);
	cout<<a_<<endl;
	cout<<b_<<endl;
	cout<<a_/gcd1(a_,b_)<<endl;
	cout<<b_/gcd1(a_,b_)<<endl;
	return 0;
}
int gcd1(int x,int y)
{
	//x>y
	if(x<y)
		return gcd1(y,x);
	else
		return (!y)?x:gcd1(y,x%y);
}