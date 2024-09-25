#include<iostream>
using namespace std;
#include"Ngay.h"

int main()
{
	Ngay x;
	x.Nhap();
	cout << "Ngay vua nhap la: ";
	x.Xuat();
	Ngay ngay_ke_tiep = x.NgayKeTiep(x);
	cout << "Ngay ke tiep la: ";
	ngay_ke_tiep.Xuat();
	return 0;
}

