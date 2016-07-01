#include <iostream>
using namespace std;
void  sort_pie(int* a,int size);
int main(int argc, char const *argv[])
{
	int a[]={2,4,3,1,6,4,8,5,0};
	int size=sizeof(a)/sizeof(int);
	sort_pie(a,size);
	for (int i = 0; i < size; i++)
		cout<<a[i]<<endl;
	return 0;
}
void sort_pie(int* a,int size)
{
	if(size==1)
		return ;
	int inf=-10;
	int index=-1;
	for(int i=0;i<size;i++)
	{
		if(inf<a[i])
		{
			inf = a[i];
			index=i;
		}
	}
	for(int i=0;i<((index+1)/2);i++)//注意临界条件
	{
		int temp=a[i];
		a[i]=a[index-i];
		a[index-i]=temp;
	}
	for(int i=0;i<((size+1)/2);i++)//注意临界条件
	{
		int temp=a[i];
		a[i]=a[size-1-i];
		a[size-1-i]=temp;
	}
	sort_pie(a,size-1);
}