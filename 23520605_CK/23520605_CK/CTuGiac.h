#pragma once
#include <iostream>
using namespace std;
class CTuGiac
{
protected:
	float a;
public:
	virtual void Nhap() = 0;
	virtual void Xuat() = 0;
	virtual float ChuVi() = 0;
	virtual float DienTich() = 0;
};

