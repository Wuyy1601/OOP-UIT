#pragma once
#include "CMachDien.h"

class CDienTro : public CMachDien
{
private:
	string MaSo;
	float R;
public:
	void Nhap();
	void Xuat();
	float TinhDienTro();
};

