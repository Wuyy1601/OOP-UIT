#include "CTapTin.h"

void CTapTin::Nhap()
{
	cout << "Ten tap tin: ";
	getline(cin, Ten);
	cout << "Nhap ngay thang tao: ";
	getline(cin, NgayThangTao);
	cout << "Nhap dung luong: ";
	cin >> DungLuong;
}

void CTapTin::Xuat()
{
	cout << "Ten tap tin: " << Ten << endl;
	cout << "Ngay thang tao: " << NgayThangTao << endl;
	cout << "Dung luong: " << DungLuong << endl;
}

float CTapTin::TongDungLuong()
{
	return DungLuong;
}

int CTapTin::DemTapTin()
{
	return 1;
}

int CTapTin::DemThuMuc()
{
	return 0;
}