#pragma once
#include "CChiTiet.h"
class CMay
{
private:
	int n;
	CChiTiet* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhTien();
	CChiTiet* TimKiem(string);
	int DemChiTietDon();
};

