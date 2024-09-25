#pragma once
#include "CNhanVien.h"

class CNhanVienQuanLy : public CNhanVien
{
private:
	float HeSoChucVu;
	float Thuong;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	CNhanVien* TimKiem(string);
};

