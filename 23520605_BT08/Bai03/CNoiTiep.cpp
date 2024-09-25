#include "CNoiTiep.h"
#include "CSongSong.h"
#include "CDienTro.h"

void CNoiTiep::Nhap()
{
	cout << "Nhap so luong mach dien con cua mach noi tiep: ";
	cin >> n;
	cin.ignore();
	int loai;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap mach dien con thu " << i + 1 << endl;
		cout << "Nhap loai(0.NT, 1.Ss, 2.Dien tro): ";
		cin >> loai;
		cin.ignore();
		switch (loai)
		{
			case 0:
				ds[i] = new CNoiTiep;
				break;
			case 1:
				ds[i] = new CSongSong;
				break;
			default:
				ds[i] = new CDienTro;
		}
		ds[i]->Nhap();
	}
}

void CNoiTiep::Xuat()
{
	cout << "Danh sach cac mach dien con cua mach dien noi tiep: " << endl;
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();
	}
}

float CNoiTiep::TinhDienTro()
{
	float S = 0;
	for (int i = 0; i < n; i++)
	{
		S = S + ds[i]->TinhDienTro();
	}
	return S;
}

