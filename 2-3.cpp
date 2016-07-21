#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a[]={1,3,2,3,4,5,6,3,7,3,3,2,3,4,3,3,11,3,2,3,4,3,20,3,3};
	int len=sizeof(a)/sizeof(int);
	int candidate;
	int i,j;
	for(i=j=0;i<len;i++)
	{
		if(j==0)
		{
			candidate=a[i];
			j=1;
		}
		else
		{
			if(candidate==a[i])
				j++;
			else
				j--;
		}
	}
	cout<<candidate<<endl;
	return 0;
}