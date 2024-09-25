#include "CCongTy.h"
#include "CNhanVienQuanLy.h"
#include "CNhanVienSanXuat.h"
#include "CNhanVienVanPhong.h"

void CCongTy::Nhap()
{
	cout << "Nhap so luong nhan vien: ";
	cin >> n;
	int loai;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap nhan vien thu " << i + 1 << ": " << endl;
		cout << "Nhap loai nhan vien (0.Nhan vien san xuat, 1.Nhan vien van phong, 2.Nhan vien quan ly): ";
		cin >> loai;
		if (loai == 0)
			ds[i] = new CNhanVienSanXuat;
		else if (loai == 1)
			ds[i] = new CNhanVienVanPhong;
		else
			ds[i] = new CNhanVienQuanLy;
		ds[i]->Nhap();
	}
}

void CCongTy::Xuat()
{
	cout << "Danh sach cac nhan vien: ";
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}

float CCongTy::TinhLuong()
{
	float tong = 0;
	for (int i = 0; i < n; i++)
		tong = tong + ds[i]->TinhLuong();
	return tong;
}

CNhanVien* CCongTy::TimKiem(string ht)
{
	for (int i = 0; i < n; i++)
	{
		CNhanVien* kq = ds[i]->TimKiem(ht);
		if (kq != NULL)
			return kq;
	}
	return NULL;
}
