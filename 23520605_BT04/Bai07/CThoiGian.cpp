#include "CThoiGian.h"
#include<iostream>
using namespace std;

CThoiGian::CThoiGian()
{
	Gio = 0;
	Phut = 0;
	Giay = 0;
	cout << "Phuong thuc thiet lap mac dinh" << endl;
}

CThoiGian::CThoiGian(int h, int p, int s)
{
	Gio = h;
	Phut = p;
	Giay = s;
	cout << "Phuong thuc thiet lap khi biet day du thong tin" << endl;
}

CThoiGian::CThoiGian(const CThoiGian& X)
{
	Gio = X.Gio;
	Phut = X.Phut;
	Giay = X.Giay;
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac" << endl;
}

CThoiGian::~CThoiGian()
{
	cout << "Phuong thuc pha huy" << endl;
}
