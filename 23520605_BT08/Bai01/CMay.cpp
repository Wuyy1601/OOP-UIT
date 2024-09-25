#include "CMay.h"
#include "CChiTietDon.h"
#include "CChiTietPhuc.h"

void CMay::Nhap()
{
	cout << "Nhap so luong chi tiet thanh phan cua may: ";
	cin >> n;
	int loai;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap chi tiet con thu " << i + 1 << " : " << endl;
		cout << "Nhap loai chi tiet(0. Chi tiet don, 1. Chi tiet phuc): ";
		cin >> loai;
		if (loai == 0)
		{
			ds[i] = new CChiTietDon;
		}
		else
		{
			ds[i] = new CChiTietPhuc;
		}
		ds[i]->Nhap();
	}
}

void CMay::Xuat()
{
	cout << "Danh sach cac chi tiet con cua may: " << endl;
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();
	}
}

float CMay::TinhTien()
{
	float tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong = tong + ds[i]->TinhTien();
	}
	return tong;
}

CChiTiet* CMay::TimKiem(string ms)
{
	for (int i = 0; i < n; i++)
	{
		CChiTiet* kq = ds[i]->TimKiem(ms);
		if (kq != nullptr)
			return kq;
	}
	return nullptr;
}

int CMay::DemChiTietDon()
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		Dem = Dem + ds[i]->DemChiTietDon();
	}
	return Dem;
}