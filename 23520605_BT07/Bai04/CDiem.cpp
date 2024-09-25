#include "CDiem.h"

istream& operator >> (istream& is, CDiem& a)
{
	cout << "Nhap diem: " << endl;
	cout << "Nhap x: ";
	is >> a.x;
	cout << "Nhap y: ";
	is >> a.y;
	return is;
}

ostream& operator << (ostream& os, CDiem a)
{
	os << "(" << a.x << ", " << a.y << ")";
	return os;
}

CDiem& CDiem::operator = (const CDiem& A)
{
	x = A.x;
	y = A.y;
	return *this;
}

bool CDiem::operator == (const CDiem& A)
{
	if (x == A.x && y == A.y)
		return true;
	return false;
}

bool CDiem::operator != (const CDiem& A)
{
	if (x == A.x && y == A.y)
		return false;
	return true;
}
