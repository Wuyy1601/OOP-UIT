#include "CTamGiac.h"

istream& operator>>(istream& is, CDiem& A)
{
	cout << "Nhap x: ";
	is >> A.x;
	cout << "Nhap y: ";
	is >> A.y;
	return is;
}

ostream& operator<<(ostream& os, CDiem A)
{
	os << "(" << A.x << "," << A.y << ")";
	return os;
}

istream& operator>>(istream& is, CTamGiac& TamGiac)
{
	cout << "Nhap diem A : ";
	is >> TamGiac.A;
	cout << "Nhap diem B : ";
	is >> TamGiac.B;
	cout << "Nhap diem C : ";
	is >> TamGiac.C;
	return is;
}
ostream& operator<<(ostream& os, CTamGiac TamGiac)
{
	cout << "Tam giac co 3 diem : " << endl;
	cout << "Diem A";
	os << TamGiac.A << endl;
	cout << "Diem B";
	os << TamGiac.B << endl;
	cout << "Diem C";
	os << TamGiac.C << endl;
	return os;
}