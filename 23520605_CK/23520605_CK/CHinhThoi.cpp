#include "CHinhThoi.h"

void CHinhThoi::Nhap()
{
	cout << "Nhap do dai canh a cua hinh thoi: ";
	cin >> a;
	cout << "Nhap do dai duong cheo d1: ";
	cin >> d1;
	cout << "Nhap do dai duong cheo d2: ";
	cin >> d2;
}

void CHinhThoi::Xuat()
{
	cout << "Do dai canh a cua hinh thoi: " << a << endl;
	cout << "Do dai duong cheo d1: " << d1 << endl;
	cout << "Do dai duong cheo d2: " << d2 << endl;
	cout << "Chu vi hinh thoi: " << ChuVi() << endl;
	cout << "Dien tich hinh thoi: " << DienTich() << endl;
}

float CHinhThoi::ChuVi()
{
	return (a * 4);
}

float CHinhThoi::DienTich()
{
	return (0.5 * (d1 * d2));
}
