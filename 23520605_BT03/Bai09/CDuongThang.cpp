#include "CDuongThang.h"

istream& operator>>(istream& is, CDuongThang& d)
{
	cout << "Nhap he so a: ";
	is >> d.a;
	cout << "Nhap he so b: ";
	is >> d.b;
	return is;
}

ostream& operator<<(ostream& os, CDuongThang d)
{
	os << "Duong thang Y = " << d.a << "x + " << d.b;
	return os;
}
