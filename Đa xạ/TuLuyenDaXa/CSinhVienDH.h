#pragma once
#include "CSinhVien.h"

class CSinhVienDH : public CSinhVien
{
private:
	string tenluanvan;
	float diemluanvan;
public:
	void Nhap();
	void Xuat();
	int sosinhvientotnghiep();
	CSinhVien* dtbmax();
};

