
#include<queue>

#include "tbd11.h"
using namespace std;
priority_queue<double> readp;
void chushi(double d)
{
	readp.push(d);
	cout<<endl;
	cout<<"�������"<<d<<"Ԫ�ɹ�\n"<<endl;
	return ; 
}
void chushihua()
{
	cout<<endl;
	system("cls");
	int num=0;
	double mon=0.0;
	cout<<"�������Ч����С�����\n";
	while (num<=10&&!readp.empty())
	{
		num++;
		mon+=readp.top();
		readp.pop();
	} 
	cout<<"�����Ч��"<<num<<"��\n";
	getminus(mon);
	cout<<"�ɹ�����"<<mon<<"Ԫ\n���������ʽ����";
	while (!_kbhit()) continue;
	return ; 
}
