#include<iostream>
#include"NGAY.h"
using namespace std;

void NGAY::Nhap()
{
	cout << "Nhap ngay: ";
	cin >> ngay;
	cout << "Nhap thang: ";
	cin >> thang;
	cout << "Nhap nam: ";
	cin >> nam;
}

void NGAY::Xuat()
{
	cout << ngay << "/" << thang << "/" << nam << endl;
}

bool NGAY::KiemTraNamNhuan()
{
	if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
		return true;
	return false;
}

int NGAY::SoNgayTrongThang(NGAY x)
{
	int songay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (KiemTraNamNhuan() == 1)
		songay[1] = 29;
	return songay[x.thang - 1];
}

NGAY NGAY::NgayHomQua(NGAY x)
{
	if (x.ngay > 1 && x.ngay <= SoNgayTrongThang(x))
		x.ngay--;
	else
	{
		if (x.thang > 1)
		{
			x.thang--;
			x.ngay = SoNgayTrongThang(x);
		}
		else
		{
			x.nam--;
			x.thang = 12;
			x.ngay = 31;
		}
	}
	return x;
}

