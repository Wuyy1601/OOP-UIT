#pragma once
#include "CNhanVien.h"

class CNhanVienSanXuat : public CNhanVien
{
private:
	int SoLuongSanPham;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	CNhanVien* TimKiem(string);
};



