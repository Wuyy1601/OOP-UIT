//Mã số sinh viên:23520605
//Họ và tên: Đồng Khánh Huy
//Ngày sinh:16/01/2005
//Lớp:TMĐT2023.1

#pragma once
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class SVDH
{
	string MSSV;
	string HoTen;
	string DiaChi;
	int TongTinChi;
	float DTB;
	string TenLuanVan;
	float DiemLuanVan;
public:
	SVDH();
	friend istream& operator>>(istream&, SVDH&);
	friend ostream& operator<<(ostream&, SVDH);
	bool DuDieuKienTotNghiep() const;
	float layDTB() const;
};
