#include<iostream>
#include "DuongTron.h"
using namespace std;

int main()
{
	DIEM x, y;
	DuongTron c;
	c.Nhap();
	float P = c.ChuVi();
	float S = c.DienTich();
	c.Xuat();
	cout << "Chu vi = " << P << endl;
	cout << "Dien tich = " << S;
	return 0;
}

