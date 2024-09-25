#pragma once
#include "CTuGiac.h"
class CHinhThoi : public CTuGiac
{
private:
	float d1;
	float d2;
public:
	void Nhap();
	void Xuat();
	float ChuVi();
	float DienTich();
};

