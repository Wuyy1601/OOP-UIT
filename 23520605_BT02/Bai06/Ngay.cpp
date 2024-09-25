#include<iostream>
using namespace std;
#include"Ngay.h"
void Ngay::Nhap()
{
	cout << "Nhap Ngay: ";
	cin >> ngay;
	cout << "Nhap thang: ";
	cin >> thang;
	cout << "Nhap nam: ";
	cin >> nam;
}

void Ngay::Xuat()
{
	cout << ngay << "/" << thang << "/" << nam << endl;
}

bool Ngay::CheckYear(Ngay x)
{
	if ((x.nam % 4 == 0 && x.nam % 100 != 0) || (x.nam % 400 == 0))
		return true;
	return false;
}

int  Ngay::SoNgayTrongThang(Ngay x)
{
	int soNgay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (CheckYear(x) == 1)
		soNgay[1] = 29;
	return soNgay[x.thang - 1];
}

Ngay Ngay::NgayKeTiep(Ngay x)
{
	if (x.ngay < SoNgayTrongThang(x))
		x.ngay++;
	else
	{
		x.ngay = 1;
		if (x.thang < 12)
			x.thang++;
		else
		{
			x.thang = 1;
			x.nam++;
		}

	}
	return x;
}
