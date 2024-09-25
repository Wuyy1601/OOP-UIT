#include "CTamGiac.h"

istream& operator >> (istream& is, CTamGiac& a)
{
	cout << "Nhap tam giac:\nNhap diem A: ";
	is >> a.A;
	cout << "Nhap diem B: ";
	is >> a.B;
	cout << "Nhap diem C: ";
	is >> a.C;
	return is;
}

ostream& operator << (ostream& os, CTamGiac a)
{
	os << "Tam giac co:\n";
	os << "Diem A: " << a.A << "\n";
	os << "Diem B: " << a.B << "\n";
	os << "Diem C: " << a.C << "\n";
	return os;
}

CTamGiac& CTamGiac::operator = (const CTamGiac& M)
{
	A = M.A;
	B = M.B;
	C = M.C;
	return *this;
}

bool CTamGiac::operator == (const CTamGiac& X)
{
	if (A == X.A && B == X.B && C == X.C)
		return true;
	return false;
}

bool CTamGiac::operator != (const CTamGiac& X)
{
	if (A == X.A && B == X.B && C == X.C)
		return false;
	return true;
}