#include "std_lib_facilities.h"

int ga[10] = {1,2,4,8,16,32,64,128,256,512};

void f(int arg[],int n )
{
	int la[10];
	for(int i=0;i<10;i++)
	{
		la[i]=ga[i];
		cout<<la<<endl;
	}
	int*p = new int[n];

	for(int i = 0;i<n;i++)
	{
		p[i] = arg[i];
		cout<<p[i]<<endl;
	}
	delete[] p;



}	




int main()
{
	f(ga,10);

	int aa[10];
	for(int i = 0;i<10;i++)
	{
		aa[i] = aa[i-1]*aa[i+1];
	}
	f(aa,10);

	return 0;
}