#pragma once
class SoPhuc
{
private:
	float thuc;
	float ao;
public:
	void Nhap();
	void Xuat();
	SoPhuc Tong(SoPhuc);
	SoPhuc Hieu(SoPhuc);
	SoPhuc Tich(SoPhuc);
};

