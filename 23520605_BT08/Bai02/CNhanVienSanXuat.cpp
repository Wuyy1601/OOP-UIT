#include "CNhanVienSanXuat.h"

void CNhanVienSanXuat::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap so luong san pham: ";
	cin >> SoLuongSanPham;
}

void CNhanVienSanXuat::Xuat()
{
	CNhanVien::Xuat();
	cout << "So luong san pham: " << SoLuongSanPham << endl;
}

float CNhanVienSanXuat::TinhLuong()
{
	return LuongCoBan + SoLuongSanPham * 2000;
}

CNhanVien* CNhanVienSanXuat::TimKiem(string ht)
{
	if (HoTen.compare(ht) == 0)
		return this;
	return NULL;
}
