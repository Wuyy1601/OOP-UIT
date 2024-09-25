#pragma once
#include "CSinhVien.h"
class CSinhVienCD : public CSinhVien
{
private:
	float diemthitotnghiep;
public:
	void Xuat();
	void Nhap();
	int sosinhvientotnghiep();
	CSinhVien* dtbmax();
};

