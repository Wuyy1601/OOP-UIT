#include "CMatPhang.h"
#include "CHinhVuong.h"
#include "CHinhThoi.h"

void CMatPhang::Nhap()
{
	cout << "Nhap so tu giac trong mat phang: ";
	cin >> n;
	int loai;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap tu giac thu " << i + 1 << " : " << endl;
		cout << "Nhap loai tu giac (0. Hinh vuong, 1. Hinh thoi): ";
		cin >> loai;
		if (loai == 0)
			ds[i] = new CHinhVuong;
		else
			ds[i] = new CHinhThoi;
		ds[i]->Nhap();
	}
}

void CMatPhang::Xuat()
{
	cout << "Danh sach tu giac trong mat phang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Tu giac thu " << i + 1 << " : " << endl;
		ds[i]->Xuat();
		cout << endl;
	}
}


float CMatPhang::TongDienTich()
{
	float tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong = tong + ds[i]->DienTich();
	}
	return tong;
}
