#pragma once
#include <iostream>
using namespace std;
class CHonSo
{
	int PhanNguyen;
	int PhanPhanSoTu;
	int PhanPhanSoMau;
public:
	CHonSo();
	CHonSo(int, int, int);
	CHonSo(const CHonSo&);
	friend ostream& operator<<(ostream&, CHonSo);
	friend istream& operator>>(istream&, CHonSo&);
	bool operator>(const CHonSo&) const;
	bool operator>=(const CHonSo&) const;
	bool operator<(const CHonSo&) const;
	bool operator<=(const CHonSo&) const;
	bool operator==(const CHonSo&) const;
};