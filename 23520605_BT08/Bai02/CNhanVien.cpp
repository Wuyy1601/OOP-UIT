#include "CNhanVien.h"

void CNhanVien::Nhap()
{
	cout << "Nhap ho ten: ";
	getline(cin, HoTen);
	cin.ignore();
	cout << "Nhap ngay sinh: ";
	getline(cin, NgaySinh);
	cin.ignore();
	cout << "Nhap luong co ban: ";
	cin >> LuongCoBan;
}

void CNhanVien::Xuat()
{
	cout << "Ho ten: " << HoTen << endl;
	cout << "Ngay sinh: " << NgaySinh << endl;
	cout << "Luong co ban: " << LuongCoBan << endl;
}

float CNhanVien::TinhLuong()
{
	return 0;
}

CNhanVien* CNhanVien::TimKiem(string ht)
{
	return NULL;
}