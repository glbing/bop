#include <iostream>
using namespace std;
int factorial1(int);
int factorial2(int);
int main(int argc, char const *argv[])
{
	int a=20;
	cout<<factorial1(a)<<endl;
	cout<<factorial2(10)<<endl;
	return 0;
}
int factorial1(int a)
{
	int v=0;
	for(int i=1;i<=a;i++)
	{
		int j=i;
		while(j%5)
		{
			v++;
			j /= 5 ;
		}	
	}
	return v;
}
int factorial2(int a)
{
	int v=0;
	for(int i=1;i<=a;i++)
	{
		int j=i;
		while(j%2)
		{
			v++;
			j /= 2 ;
		}	
	}
	return v+1;
}
