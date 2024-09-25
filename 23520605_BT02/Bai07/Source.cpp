#include<iostream>
#include"NGAY.h"
using namespace std;

int main()
{
	NGAY x;
	x.Nhap();
	cout << "Ngay vua nhap la: ";
	x.Xuat();
	NGAY kq = x.NgayHomQua(x);
	cout << "ngay hom qua la: ";
	kq.Xuat();
	return 0;
}