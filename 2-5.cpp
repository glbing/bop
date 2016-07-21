#include <iostream>
using namespace std;
int partition(int*a,int begin,int end);
void select(int*a,int begin,int end,int n);
int main(int argc, char const *argv[])
{
	int a[]={2,3,5,1,7,8,12,34,6,71,0,13,24};
	int len=sizeof(a)/sizeof(int);
	int n=12;
	select(a,0,len-1,n);
	for(int i=0;i<len;i++)
		cout<<a[i]<<endl;
	return 0;
}
int partition(int*a,int begin,int end)
{
    int i=begin+1;
    int j=end;
    while(i<=j)
    {
        while(a[i]<a[begin])
            i++;
        while(a[j]>a[begin])
            j--;
        if(i>=j)
            break;
         else
        {   int temp;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }
    int temp;
    temp=a[begin];
    a[begin]=a[j];
    a[j]=temp;
    return j;
}
void select(int*a,int begin,int end,int n)
{
	int s=partition(a,begin,end);
	if(s==n)
		return;
	else if(s>n)
		select(a,begin,s-1,n);
	else
		select(a,s+1,end,n);


}
