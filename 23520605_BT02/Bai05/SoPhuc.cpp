#include<iostream>
using namespace std;
#include"SoPhuc.h"

void SoPhuc::Nhap()
{
	cout << "Nhap phan thuc : ";
	cin >> thuc;
	cout << "Nhap phan ao : ";
	cin >> ao;
}

void SoPhuc::Xuat()
{
	cout << thuc << "+" << ao << "i" << endl;
}

SoPhuc SoPhuc::Tong(SoPhuc y)
{
	SoPhuc temp;
	temp.thuc = thuc + y.thuc;
	temp.ao = ao + y.ao;
	return temp;
}

SoPhuc SoPhuc::Hieu(SoPhuc y)
{
	SoPhuc temp;
	temp.thuc = thuc - y.thuc;
	temp.ao = ao - y.ao;
	return temp;
};

SoPhuc SoPhuc::Tich(SoPhuc y)
{
	SoPhuc temp;
	temp.thuc = thuc * y.thuc - ao * y.ao;
	temp.ao = thuc * y.ao + ao * y.thuc;
	return temp;
}
