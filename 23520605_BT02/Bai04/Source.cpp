#include<iostream>
#include<math.h>
using namespace std;
#include"PhanSo.h"

int main()
{
	PhanSo ps1, ps2;
	ps1.Nhap();
	cout << "Phan so vua nhap la: "; ps1.Xuat();
	ps2.Nhap();
	cout << "Phan so vua nhap la: "; ps2.Xuat();
	PhanSo Tong = ps1.Tong(ps2);
	cout << "Tong hai phan so la: ";
	Tong.Xuat();
	PhanSo Hieu = ps1.Hieu(ps2);
	cout << "Hieu hai phan so la: ";
	Hieu.Xuat();
	PhanSo Tich = ps1.Tich(ps2);
	cout << "Tich hai phan so la: ";
	Tich.Xuat();
	return 0;
}