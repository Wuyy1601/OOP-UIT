#pragma once
#include "CNhanVien.h"

class CNhanVienVanPhong : public CNhanVien
{
private:
	int SoNgayLamViec;
	float TroCap;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	CNhanVien* TimKiem(string);
};

