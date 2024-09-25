//Mã số sinh viên:23520605
//Họ và tên: Đồng Khánh Huy
//Ngày sinh:16/01/2005
//Lớp:TMĐT2023.1
#include "QuanLySVDH.h"

SVDH::SVDH()
{
	MSSV = "";
	HoTen = "";
	DiaChi = "";
	TongTinChi = 0;
	DTB = 0;
	TenLuanVan = "";
	DiemLuanVan = 0;
}

istream& operator>>(istream& is, SVDH& SV)
{
	cout << "Nhap mssv: ";
	getline(cin, SV.MSSV);
	cout << "Nhap ho va ten: ";
	getline(cin, SV.HoTen);
	cout << "Dia chi: ";
	getline(cin, SV.DiaChi);
	cout << "Nhap tong tin chi: ";
	is >> SV.TongTinChi;
	cout << "Nhap DTB: ";
	is >> SV.DTB;
	cin.ignore();
	cout << "Nhap ten luan van: ";
	getline(cin, SV.TenLuanVan);
	cout << "Nhap diem luan van: ";
	is >> SV.DiemLuanVan;
	return is;
}

ostream& operator<<(ostream& os, SVDH SV) {
	os << "MSSV: " << SV.MSSV << endl;
	os << "Ho va ten: " << SV.HoTen << endl;
	os << "Dia chi: " << SV.DiaChi << endl;
	os << "Tong tin chi: " << SV.TongTinChi << endl;
	os << "DTB: " << SV.DTB << endl;
	os << "Ten luan van: " << SV.TenLuanVan << endl;
	os << "Diem luan van: " << SV.DiemLuanVan << endl;
	return os;
}

bool SVDH::DuDieuKienTotNghiep() const
{
	if (TongTinChi >= 145 && DTB >= 5.0 && DiemLuanVan >= 5.00)
		return true;
	return false;
}

float SVDH::layDTB () const
{
	return DTB;
}
