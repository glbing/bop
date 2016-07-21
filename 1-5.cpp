#include <iostream>
using namespace std;
const int a[]={0,1,2,2,3,1,4,6,7,8,7,0,4,5,3,6,8,9};
const int range=10;
//ID:[0~9]
int main(int argc, char const *argv[])
{
	/* code */
	int* list=new int[range];
	for(int i=0;i<range;i++)
		list[i]=0;
	for(int i=0;i<(sizeof(a)/sizeof(int));i++)
		list[a[i]]++;
	for(int i=0;i<range;i++)
	{
		//cout<<list[i]<<endl;
		if(list[i]==1)
			cout<<"故障机器ID："<<i<<endl;
	}

	int f=0;
	for(int i=0;i<(sizeof(a)/sizeof(int));i++)
		f=f^a[i];
	cout<<f<<endl;

	return 0;
}