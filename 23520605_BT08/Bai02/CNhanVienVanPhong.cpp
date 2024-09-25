#include "CNhanVienVanPhong.h"

void CNhanVienVanPhong::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap so ngay lam vec: ";
	cin >> SoNgayLamViec;
	cout << "Nhap tro cap: ";
	cin >> TroCap;
}

void CNhanVienVanPhong::Xuat()
{
	CNhanVien::Xuat();
	cout << "So ngay lam viec: " << SoNgayLamViec << endl;
	cout << "Tro cap: " << TroCap << endl;
}

float CNhanVienVanPhong::TinhLuong()
{
	return LuongCoBan + SoNgayLamViec * 100000 + TroCap;
}

CNhanVien* CNhanVienVanPhong::TimKiem(string ht)
{
	if (HoTen.compare(ht) == 0)
		return this;
	return NULL;
}