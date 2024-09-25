#include "CDuongTron.h"

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
	os << "Diem O(" << A.x << "," << A.y << ")";
	return os;
}

istream& operator>>(istream& is, CDuongTron& A)
{
	cout << "Nhap tam duong tron O: ";
	is >> A.O;
	cout << "Nhap ban kinh R = ";
	is >> A.R;
	return is;
}
ostream& operator<<(ostream& os, CDuongTron A)
{
	os << "Tam duong tron: " << A.O << endl;
	os << "Ban kinh R = " << A.R << endl;
	return os;
}