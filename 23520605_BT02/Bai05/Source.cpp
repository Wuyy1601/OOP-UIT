#include<iostream>
using namespace std;
#include"SoPhuc.h"

int main()
{
	SoPhuc x, y;
	x.Nhap();
	cout << "So phuc vua nhap la: ";
	x.Xuat();
	y.Nhap();
	cout << "So phuc vua nhap la: ";
	y.Xuat();
	SoPhuc Tong = x.Tong(y);
	cout << "Tong hai so phuc la: ";
	Tong.Xuat();
	SoPhuc Hieu = x.Hieu(y);
	cout << "Hieu hai so phuc la: ";
	Hieu.Xuat();
	SoPhuc Tich = x.Tich(y);
	cout << "Tich hai so phuc la: ";
	Tich.Xuat();
	return 0;
}