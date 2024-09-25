//Mã số sinh viên:23520605
//Họ và tên: Đồng Khánh Huy
//Ngày sinh:16/01/2005
//Lớp:TMĐT2023.1
#pragma once
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class SVCD
{
	string MSSV;
	string HoTen;
	string DiaChi;
	int TongTinChi;
	float DTB;
	float DiemThiTotNghiep;
public:
	SVCD();
	friend istream& operator>>(istream&, SVCD&);
	friend ostream& operator<<(ostream&, SVCD);
	bool DuDieuKienTotNghiepCD() const;
};