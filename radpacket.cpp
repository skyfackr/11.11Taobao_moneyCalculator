


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
		cout<<"�������"<<d<<"Ԫ�ɹ�\n"<<endl;
		_sleep(5);
	}
	in.close();
	return ; 
}
void chushihua()
{
	cout<<"�����������\ny:���� n:������"<<endl;
	char ch;
	reset:
	while (!_kbhit()) continue;
	ch=_getch();
	if (ch!='y'&&ch!='n') goto reset;
	if (ch=='n')
	{
		cout<<"��������ᱻ����\n�������ֱ������"<<endl;
		while (!_kbhit()) continue;
		return ; 
	}
	chushi();
	cout<<endl;
	system("cls");
	int num=0;
	double mon=0.0;
	cout<<"�������Ч����С�����\n";
	while (num<=9&&!readp.empty())
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
