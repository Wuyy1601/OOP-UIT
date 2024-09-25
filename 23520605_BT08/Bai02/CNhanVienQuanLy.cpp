#include "CNhanVienQuanLy.h"

void CNhanVienQuanLy::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap he so chuc vu: ";
	cin >> HeSoChucVu;
	cout << "Nhap thuong: ";
	cin >> Thuong;
}

void CNhanVienQuanLy::Xuat()
{
	CNhanVien::Xuat();
	cout << "He so chuc vu: " << HeSoChucVu << endl;
	cout << "Thuong: " << Thuong << endl;
}

float CNhanVienQuanLy::TinhLuong()
{
	return LuongCoBan * HeSoChucVu + Thuong;
}

CNhanVien* CNhanVienQuanLy::TimKiem(string ht)
{
	if (HoTen.compare(ht) == 0)
		return this;
	return NULL;
}
