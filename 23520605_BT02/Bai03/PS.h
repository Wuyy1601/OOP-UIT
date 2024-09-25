#pragma once
class PS
{
private:
	float tu;
	float mau;
public:
	void Nhap();
	void Xuat();
	int  Check();
	PS Hieu(PS);
	PS Max(PS);
};

