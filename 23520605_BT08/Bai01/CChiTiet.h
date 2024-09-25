#pragma once
#include <iostream>
#include <string>
using namespace std;

class CChiTiet
{
protected:
	string MaSo;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhTien();
	virtual CChiTiet* TimKiem(string);
	virtual int DemChiTietDon();
};

