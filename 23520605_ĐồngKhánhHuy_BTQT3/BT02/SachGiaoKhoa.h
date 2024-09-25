//Mã số sinh viên:23520605
//Họ và tên: Đồng Khánh Huy
//Ngày sinh:16/01/2005
//Lớp:TMĐT2023.1
#pragma once
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
class SGK
{
	string MaSach;
	string TenSach;
	string NhaXuatBan;
	int soluong;
	float DonGia;
	int TinhTrang;
public:
	SGK();
	friend istream& operator>>(istream&, SGK&);
	friend ostream& operator<<(ostream&, SGK);
	float ThanhTienSGK() const;
	string LayTenNXB() const;
	string LayTenSach() const;
};
