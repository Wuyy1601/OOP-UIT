#include "CChiTietPhuc.h"
#include "CChiTietDon.h"

void CChiTietPhuc::Nhap()
{
	cout << "Nhap ma so: ";
	cin >> MaSo;
	cout << "Nhap so luong chi tiet con: ";
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

void CChiTietPhuc::Xuat()
{
	cout << "Ma so: " << MaSo << endl;
	cout << "Danh sach cac chi tiet con cua chi tiet phuc: " << endl;
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();
	}
}

float CChiTietPhuc::TinhTien()
{
	float tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong = tong + ds[i]->TinhTien();
	}
	return tong;
}

CChiTiet* CChiTietPhuc::TimKiem(string ms)
{
	if (MaSo.compare(ms) == 0)
		return this;
	for (int i = 0; i < n; i++)
	{
		CChiTiet* kq = ds[i]->TimKiem(ms);
		if (kq != nullptr)
			return kq;
	}
	return nullptr;
}

int CChiTietPhuc::DemChiTietDon()
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		Dem = Dem + ds[i]->DemChiTietDon();
	}
	return Dem;
}