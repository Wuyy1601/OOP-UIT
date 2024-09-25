#pragma once
#include "CChiTiet.h"
class CChiTietPhuc: public CChiTiet
{
	int n;
	CChiTiet* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhTien();
	CChiTiet* TimKiem(string);
	int DemChiTietDon();
};

