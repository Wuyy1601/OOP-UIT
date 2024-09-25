#pragma once
#include "CSinhVien.h"
class CDHCNTT
{
	int n;//so luong sv
	CSinhVien* ds[100];
public:
	void Nhap();
	void Xuat();
	int sosinhvientotnghiep();
};

