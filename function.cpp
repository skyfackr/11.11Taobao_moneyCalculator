
using namespace std;
#define ll long long
#include "tbd11.h"
double minuss=0.0,nomoney=0.0,yesmoney=0.0;
void getminus(double mmm)
{
	minuss=mmm;
	return ;
}
void addd(bool zt,double money)
{
	if (zt==1) 
	{
		yesmoney+=money;
		ll it=yesmoney/400;
		minuss+=50*it;
		nomoney+=400*it;
		yesmoney-=400.0*it;
		cout<<"津贴加入成功\n当前总金额："<<nomoney+yesmoney-minuss<<"\n已优惠："<<minuss<<"\n未受到满减金额："<<yesmoney<<endl; 
		return ;
	}
	nomoney+=money;
	cout<<"普通金额加入成功\n当前总金额："<<nomoney+yesmoney-minuss<<"\n已优惠："<<minuss<<"\n未受到满减金额："<<yesmoney<<endl; 
		return ;
}
string nowmoney()
{
	string s;
	s.clear();
	s+="当前总金额：";
	s+= nomoney+yesmoney-minuss;
	s+="\n已经优惠：";
	s+=minuss;
	s+="\n未得到满减：";
	s+=yesmoney;
	return s; 
}
void exitp()
{
	system("cls");
	cout<<nowmoney()<<endl;
	cout<<"按任意键退出程序\n";
	while (!_kbhit()) continue;
	exit(0); 
}
