#include<iostream>
#include "DuongTron.h"
using namespace std;


void DIEM::Nhap()
{
	cout << "Nhap hoanh do: "; cin >> x;
	cout << "Nhap tung do: "; cin >> y;
}

void DIEM::Xuat()
{
	cout << "(" << x << "," << y << ")" << endl;
}

void DuongTron::Nhap()
{
	cout << "Nhap tam " << endl;
	O.Nhap();
	cout << "Nhap ban kinh: ";
	cin >> R;
}

void DuongTron::Xuat()
{
	cout << "Tam O: ";
	O.Xuat();
	cout << "Ban kinh R: " << R << endl;
}

float DuongTron::DienTich()
{
	return  3.14 * R * R;
}

float DuongTron::ChuVi()
{
	return 2 * 3.14 * R;
}


