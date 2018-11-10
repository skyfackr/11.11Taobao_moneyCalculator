


#include "tbd11.h"
using namespace std;
priority_queue<double> readp;
void chushi()
{
	ifstream in;
	in.open("radpacketdata.tbd11data",ios::in);
	while (!in.eof())
	{
		double d;
		in>>d;
		readp.push(d);
		cout<<endl;
		cout<<"红包读入"<<d<<"元成功\n"<<endl;
		_sleep(5);
	}
	in.close();
	return ; 
}
void chushihua()
{
	cout<<"你想读入红包吗？\ny:启动 n:不启动"<<endl;
	char ch;
	reset:
	while (!_kbhit()) continue;
	ch=_getch();
	if (ch!='y'&&ch!='n') goto reset;
	if (ch=='n')
	{
		cout<<"红包将不会被读入\n按任意键直接启动"<<endl;
		while (!_kbhit()) continue;
		return ; 
	}
	chushi();
	cout<<endl;
	system("cls");
	int num=0;
	double mon=0.0;
	cout<<"读入可生效红包中。。。\n";
	while (num<=9&&!readp.empty())
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
