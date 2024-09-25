#pragma once
#include <iostream>
#include <string>
using namespace std;

class CSinhVien
{
protected:
	string mssv;
	string hoten;
	string diachi;
	int tongsotinchi;
	float diemtrungbinh;
public:
	virtual void Nhap() = 0;
	virtual void Xuat() = 0;
	virtual int sosinhvientotnghiep() = 0;
	virtual CSinhVien* dtbmax() = 0;
};

