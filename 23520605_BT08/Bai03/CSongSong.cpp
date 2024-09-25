#include "CSongSong.h"
#include "CMachDien.h"
#include "CNoiTiep.h"
#include "CDienTro.h"
void CSongSong::Nhap()
{
	cout << "Nhap so luong mach dien con cua mach song song: ";
	cin >> n;
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

void CSongSong::Xuat()
{
	cout << "Danh sach cac mach dien con cua mach dien song song: " << endl;
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();
	}
}


float CSongSong::TinhDienTro()
{
	float S = 0;
	for (int i = 0; i < n; i++)
	{
		S = S + 1/ds[i]->TinhDienTro();
	}
	return 1/S;
}
