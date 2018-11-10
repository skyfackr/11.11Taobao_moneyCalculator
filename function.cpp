
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
void nowmoney()
{
	
//	s.clear();
	cout<<"当前总金额：";
	double d;
	d=max(nomoney+yesmoney-minuss,0.0);
	cout<<d;
	cout<<"\n已经优惠：";
	d=minuss;
	cout<<d;
	cout<<"\n未得到满减：";
	d=yesmoney;
	cout<<d;
	cout<<endl;
	return ; 
}
void exitp()
{
	system("cls");
	nowmoney();
	cout<<"按任意键退出程序\n";
	while (!_kbhit()) continue;
	exit(0); 
}
