#include "std_lib_facilities.h"

vector<int> gv{1,2,4,6,8,16,32,64,128,256,512};

void f(vector<int>&v)
{
	vector<int> lv(v.size());
	lv = gv;
	for(int i = 0;i<10;i++)
	{
		cout<<lv[i]<<endl;
	}
	vector<int> lv_2;
	lv_2 = v;
	for(int i = 0;i<10;i++)
{
	cout<<lv_2[i]<<endl;
}

}

int main()
{

	f(gv);
	vector<int> vv;
	for(int i = 0 ;i<10;i++)
	{
		vv.push_back((i+1)*vv[i-1]);
	}
	f(vv);


	return 0;
}