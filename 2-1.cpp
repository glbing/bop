#include <iostream>
using namespace std;
int count1(unsigned char);
int count2(unsigned char);
int count3(unsigned char);
int main(int argc, char const *argv[])
{
	unsigned char a=15;
	cout<<count1(a)<<endl;
	cout<<count2(a)<<endl;
	cout<<count3(a)<<endl;
	return 0;
}
int count1(unsigned char a)
{
	int v=0;
	while(a)
	{
		
		v += a%2;
		a=a/2;
	}
	return v;
}
int count2(unsigned char a)
{
	int v=0;
	while(a)
	{
		v += a & 0x01;
		a >>= 1;

	}
	return v;
}
int count3(unsigned char a)//		
{
	int v=0;
	while(a)
	{
		a &= (a-1);
		v++;
	}
	return v;
}