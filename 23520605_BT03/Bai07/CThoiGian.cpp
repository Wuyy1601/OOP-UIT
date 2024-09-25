#include "CThoiGian.h"
istream& operator>>(istream& is, CThoiGian& x)
{
	cout << "Nhap gio: ";
	is >> x.gio;
	cout << "Nhap phut: ";
	is >> x.phut;
	cout << "Nhap giay: ";
	is >> x.giay;
	return is;
}
ostream& operator<<(ostream& os, CThoiGian x)
{
	os << x.gio << " gio " << x.phut << " phut " << x.giay << " giay" << endl;
	return os;
}
