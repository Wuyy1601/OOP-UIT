//Mã số sinh viên:23520605
//Họ và tên: Đồng Khánh Huy
//Ngày sinh:16/01/2005
//Lớp:TMĐT2023.1
#include "QuanLySVCD.h"

SVCD::SVCD()
{
	MSSV = "";
	HoTen = "";
	DiaChi = "";
	TongTinChi = 0;
	DTB = 0;
	DiemThiTotNghiep = 0;
}

istream& operator>>(istream& is, SVCD& SV)
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
	cout << "Nhap diem thi tot nghiep: ";
	is >> SV.DiemThiTotNghiep;
	return is;
}

ostream& operator<<(ostream& os, SVCD SV) {
	os << "MSSV: " << SV.MSSV << endl;
	os << "Ho va ten: " << SV.HoTen << endl;
	os << "Dia chi: " << SV.DiaChi << endl;
	os << "Tong tin chi: " << SV.TongTinChi << endl;
	os << "DTB: " << SV.DTB << endl;
	os << "Diem thi tot nghiep: " << SV.DiemThiTotNghiep << endl;
	return os;
}

bool SVCD::DuDieuKienTotNghiepCD() const
{
	if (TongTinChi >= 110 && DTB >= 5.0 && DiemThiTotNghiep >= 5.00)
		return true;
	return false;
}