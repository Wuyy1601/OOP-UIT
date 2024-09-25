#pragma once
#include "CMachDien.h"
class CSongSong : public CMachDien
{
private:
	int n;
	CMachDien* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhDienTro();
};

