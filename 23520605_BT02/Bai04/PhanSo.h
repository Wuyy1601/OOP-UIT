#pragma once
class PhanSo
{
private:
	int tu;
	int mau;
public:
	void Nhap();
	void Xuat();
	int GCD(int a, int b);
	PhanSo Tong(PhanSo);
	PhanSo Hieu(PhanSo);
	PhanSo Tich(PhanSo);
	PhanSo  RutGon(PhanSo);
};


