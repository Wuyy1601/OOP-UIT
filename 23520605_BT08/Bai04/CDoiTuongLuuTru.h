#pragma once
#include <iostream>
#include <string>
using namespace std;
class CDoiTuongLuuTru
{
protected:
	string Ten;
	string NgayThangTao;
public:
	virtual void Nhap() = 0;
	virtual void Xuat() = 0;
	virtual float TongDungLuong() = 0;
	virtual int DemTapTin() = 0;
	virtual int DemThuMuc() = 0;
};

