#include "CDHCNTT.h"
#include "CSinhVienCD.h"
#include "CSinhVienDH.h"
void CDHCNTT::Nhap()
{
	cout << "Nhap so luong sv: ";
	cin >> n;
	int loai;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap sv thu " << i + 1 << endl;
		cout << "nhap loai sv(0.CD, 1.DH): ";
		cin >> loai;
		cin.ignore();
		if (loai == 0)
			ds[i] = new CSinhVienCD;
		else
			ds[i] = new CSinhVienDH;
		ds[i]->Nhap();
	}
}
void CDHCNTT::Xuat()
{
	cout << "ds sv: " << endl;
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();
	}

}

int CDHCNTT::sosinhvientotnghiep()
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong = tong + ds[i]->sosinhvientotnghiep();
	}
	return tong;
}