#pragma once
#include "CTuGiac.h"
class CMatPhang
{
private:
	int n;//so hinh tren mat phang
	CTuGiac* ds[100];
public:
	void Nhap();
	void Xuat();
	float TongDienTich();
};

