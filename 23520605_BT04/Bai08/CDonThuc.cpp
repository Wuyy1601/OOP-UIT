#include "CDonThuc.h"
#include <iostream>
using namespace std;
CDonThuc::CDonThuc()
{
	Bac = 0;
	HeSo = 0;
	cout << "Phuong thuc thiet lap mac dinh" << endl;
}
CDonThuc::CDonThuc(int n, int a)
{
	Bac = n;
	HeSo = a;
	cout << "Phuong thuc thiet lap khi biet day du thong tin" << endl;
}
CDonThuc::CDonThuc(const CDonThuc& X)
{
	Bac = X.Bac;
	HeSo = X.HeSo;
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac" << endl;
}
CDonThuc::~CDonThuc()
{
	cout << "Phuong thuc pha huy" << endl;
}
