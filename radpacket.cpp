
#include<queue>

#include "tbd11.h"
using namespace std;
priority_queue<double> readp;
void chushi(double d)
{
	readp.push(d);
	cout<<endl;
	cout<<"红包读入"<<d<<"元成功\n"<<endl;
	return ; 
}
void chushihua()
{
	cout<<endl;
	system("cls");
	int num=0;
	double mon=0.0;
	cout<<"读入可生效红包中。。。\n";
	while (num<=10&&!readp.empty())
	{
		num++;
		mon+=readp.top();
		readp.pop();
	} 
	cout<<"红包生效共"<<num<<"个\n";
	getminus(mon);
	cout<<"成功读入"<<mon<<"元\n按任意键正式启动";
	while (!_kbhit()) continue;
	return ; 
}
