#include "TAMGIAC.h"
#include <iostream>
using namespace std;

void TAMGIAC::Nhap()
{
	cout << "Nhap 3 diem Tam giac: ";
		cout << "Nhap A: "<< endl;
		A.Nhap();
		cout << "Nhap B: "<< endl;
		B.Nhap();
		cout << "Nhap C: "<< endl;
		C.Nhap();
}

void TAMGIAC::Xuat()
{
	cout << "Toa do A: ";
	A.Xuat();
	cout << "Toa do B: ";
	B.Xuat();
	cout << "Toa do C: ";
	C.Xuat();
}

int TAMGIAC::KiemTraTamGiac()
{
	float AB = A.KhoangCach(B);
	float AC = A.KhoangCach(C);
	float BC = B.KhoangCach(C);
	if (AB + AC > BC && AB + BC > AC && AC + BC > AB)
		return 1;
	return 0;
}

float TAMGIAC::Chuvi()
{
	float AB = A.KhoangCach(B);
	float AC = A.KhoangCach(C);
	float BC = B.KhoangCach(C);
	return AB + AC + BC;
}

float TAMGIAC::DienTich()
{
	float a = A.KhoangCach(B);
	float b = A.KhoangCach(C);
	float c = B.KhoangCach(C);
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

DIEM TAMGIAC::TrongTam()
{
	DIEM G;
	float Gx = (A.LayX() + B.LayX() + C.LayX()) / 3;
	G.CapNhatX(Gx);
	float Gy = (A.LayY() + B.LayY() + C.LayY()) / 3;
	G.CapNhatY(Gy);
	return G;
}
