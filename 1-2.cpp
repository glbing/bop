#include <iostream>
using namespace std;
struct byte
{
	unsigned char a:4;
	unsigned char b:4;
};
int main(int argc, char const *argv[])
{
	byte i; 
	for(i.a=1;i.a<=9;i.a++)
		for(i.b=1;i.b<=9;i.b++)
		{
			if(i.a%3!=i.b%3)
				cout<<(int)i.a<<" "<<(int)i.b<<endl;
		}
	return 0;
}