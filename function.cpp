
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
		cout<<"��������ɹ�\n��ǰ�ܽ�"<<nomoney+yesmoney-minuss<<"\n���Żݣ�"<<minuss<<"\nδ�ܵ�������"<<yesmoney<<endl; 
		return ;
	}
	nomoney+=money;
	cout<<"��ͨ������ɹ�\n��ǰ�ܽ�"<<nomoney+yesmoney-minuss<<"\n���Żݣ�"<<minuss<<"\nδ�ܵ�������"<<yesmoney<<endl; 
		return ;
}
string nowmoney()
{
	string s;
	s.clear();
	s+="��ǰ�ܽ�";
	s+= nomoney+yesmoney-minuss;
	s+="\n�Ѿ��Żݣ�";
	s+=minuss;
	s+="\nδ�õ�������";
	s+=yesmoney;
	return s; 
}
void exitp()
{
	system("cls");
	cout<<nowmoney()<<endl;
	cout<<"��������˳�����\n";
	while (!_kbhit()) continue;
	exit(0); 
}
