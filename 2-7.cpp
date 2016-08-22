#include <iostream>
#include <string>
#include <sstream>
#include <complex>
using namespace std;
int gcd1(int ,int);
int gcd2(int,int);
int main(int argc, char const *argv[])
{
	/* code */
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

int gcd2(int x,int y)
{
	//x>y
	if(x<y)
		return gcd2(y,x);
	else
		return (!y)?x:gcd2(y,x-y);
}