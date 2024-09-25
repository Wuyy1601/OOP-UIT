#include "CHinhVuong.h"

void CHinhVuong::Nhap()
{
	cout << "Nhap do dai canh a cua hinh vuong: ";
	cin >> a;
}

void CHinhVuong::Xuat()
{
	cout << "Do dai canh a cua hinh vuong: " << a << endl;
	cout << "Chu vi hinh vuong: " << ChuVi() << endl;
	cout << "Dien tich hinh vuong: " << DienTich() << endl;
}

float CHinhVuong::ChuVi()
{
	return (a * 4);
}

float CHinhVuong::DienTich()
{
	return (a * a);
}