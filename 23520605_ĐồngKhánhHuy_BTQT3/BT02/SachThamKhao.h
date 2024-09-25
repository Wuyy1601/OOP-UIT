
//Mã số sinh viên:23520605
//Họ và tên: Đồng Khánh Huy
//Ngày sinh:16/01/2005
//Lớp:TMĐT2023.1
#pragma once
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class STK
{
	string MaSach;
	string TenSach;
	string NhaXuatBan;
	int SoLuong;
	float DonGia;
	float TienThue;
public:
	STK();
	friend istream& operator>>(istream&, STK&);
	friend ostream& operator<<(ostream&, STK);
	float ThanhTienSTK() const;
	string LayTenNXB() const;
	string LayTenSach() const;
};
