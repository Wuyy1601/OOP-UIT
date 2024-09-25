#include "CThoiGian.h"
ostream& operator<<(ostream& os, CThoiGian x)
{
	os << x.Gio << " gio " << x.Phut << " phut " << x.Giay << " giay" << endl;
	return os;
}

CThoiGian::CThoiGian()
{
	Gio = 0;
	Phut = 0;
	Giay = 0;
}

CThoiGian::CThoiGian(int h, int p, int s)
{
	Gio = h;
	Phut = p;
	Giay = s;
}

CThoiGian::CThoiGian(const CThoiGian& X)
{
	Gio = X.Gio;
	Phut = X.Phut;
	Giay = X.Giay;
}

CThoiGian& CThoiGian::operator=(CThoiGian& A)
{
	Gio = A.Gio;
	Phut = A.Phut;
	Giay = A.Giay;
	return*this;
}