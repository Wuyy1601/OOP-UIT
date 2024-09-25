#include "CHinhCau.h"

istream& operator>>(istream& is, CHinhCau& a)
{
	cout << "Nhap tam: ";
	cout << "Nhap x: ";
	is >> a.x;
	cout << "Nhap y: ";
	is >> a.y;
	cout << "Nhap z: ";
	is >> a.z;
	cout << "Ban kinh: ";
	is >> a.r;
	return is;
}

ostream& operator<<(ostream& os, CHinhCau a)
{
	os << "Phuong trinh hinh cau: ";
	if (a.r <= 0)
		os << "Khong hop le.";
	else
		os << "(x - " << a.x << ")^2 + (y - " << a.y << ")^2 + (z - " << a.z << ")^2 = " << a.r * a.r;
	return os;
}

CHinhCau& CHinhCau::operator=(const CHinhCau& A)
{
	x = A.x;
	y = A.y;
	z = A.z;
	r = A.r;
	return *this;
}

bool CHinhCau::operator == (const CHinhCau& A)
{
	if (x == A.x && y == A.y && z == A.z && r == A.r)
		return true;
	return false;
}

bool CHinhCau::operator != (const CHinhCau& A)
{
	if (x == A.x && y == A.y && z == A.z && r == A.r)
		return false;
	return true;
}