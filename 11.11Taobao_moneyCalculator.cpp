
#define regi register int
#define ll long long
#include "tbd11.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	cout<<fixed<<setprecision(2);
	cout<<"输入红包个数：";
	int n;cin>>n;
	for (regi i=1;i<=n;i++)
	{
		double mon;
		cout<<"请输入第"<<i<<"个：\n";
		cin>>mon;
		chushi(mon); 
	}
	chushihua();
	cout<<endl; 
	while (1)
	{
		double did;int zt;
		cin>>did>>zt;
		if (zt!=0&&zt!=1) exitp();
		if (did==-1) cout<<nowmoney()<<endl;
		else addd(zt,did);
	}
	return 0;
}
