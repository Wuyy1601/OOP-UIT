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
	CPhanSo();
	CPhanSo(int, int);
	CPhanSo(const CPhanSo&);
	CPhanSo& operator+(CPhanSo&);
	CPhanSo& operator-(CPhanSo&);
	CPhanSo& operator*(CPhanSo&);
	CPhanSo& operator/(CPhanSo&);
	CPhanSo& operator+=(CPhanSo&);
	CPhanSo& operator-=(CPhanSo&);
	CPhanSo& operator*=(CPhanSo&);
	CPhanSo& operator/=(CPhanSo&);
	CPhanSo& operator++();
	CPhanSo& operator--();
	CPhanSo& operator=(CPhanSo&);
};

