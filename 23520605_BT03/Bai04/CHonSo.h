#pragma once
#include <iostream>
using namespace std;

class CPhanSo
{
	float tu;
	float mau;
public:
	friend istream& operator>>(istream&, CPhanSo&);
	friend ostream& operator<<(ostream&, CPhanSo);
};

class CHonSo
{
	CPhanSo PhanPhanSo;
	int PhanNguyen;
public :
	friend istream& operator>>(istream&, CHonSo&);
	friend ostream& operator<<(ostream&, CHonSo);
};

