#pragma once
#include "CNhanVien.h"

class CCongTy
{
private:
	int n;
	CNhanVien* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	CNhanVien* TimKiem(string);
};

