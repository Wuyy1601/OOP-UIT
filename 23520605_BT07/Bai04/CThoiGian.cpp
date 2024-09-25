#include "CThoiGian.h"

istream& operator >> (istream& is, CThoiGian& a)
{
	cout << "Nhap thoi gian: " << endl;
	cout << "Nhap gio: ";
	is >> a.h;
	cout << "Nhap phut: ";
	is >> a.m;
	cout << "Nhap giay: ";
	is >> a.s;
	return is;
}

ostream& operator << (ostream& os, CThoiGian a)
{
	os << "Thoi gian: " << a.h << " gio, " << a.m << " phut, " << a.s << " giay.";
	return os;
}

CThoiGian& CThoiGian::operator = (const CThoiGian& A)
{
	h = A.h;
	m = A.m;
	s = A.s;
	return *this;
}

bool CThoiGian::operator == (CThoiGian& A)
{
	s = s % 60;
	m = m % 60;
	h = h % 24;
	A.s = A.s % 60;
	A.m = A.m % 60;
	A.h = A.h % 24;
	if (s = A.s && m == A.m && h == A.h)
		return true;
	return false;
}

bool CThoiGian::operator != (CThoiGian& A)
{
	s = s % 60;
	m = m % 60;
	h = h % 24;
	A.s = A.s % 60;
	A.m = A.m % 60;
	A.h = A.h % 24;
	if (s = A.s && m == A.m && h == A.h)
		return false;
	return true;
}