#include "CDonThuc.h"

istream& operator>>(istream& is, CDonThuc& a)
{
	cout << "Nhap don thuc: " << endl;
	cout << "Nhap he so: ";
	is >> a.heso;	
	cout << "Nhap bac: ";
	is >> a.somu;
	return is;
}

ostream& operator<<(ostream& os, CDonThuc a)
{
	os << "Don thuc: ";
	if (a.heso == 0) os << 0;
	else if (a.heso == 1)
	{
		if (a.somu == 0) os << 1;
		else if (a.somu == 1) os << "x";
		else os << "x^" << a.somu;
	}
	else
	{
		if (a.somu == 0) os << a.heso;
		else if (a.somu == 1) os << a.heso << "x";
		else os << a.heso << "x^" << a.somu;
	}
	return os;
}

CDonThuc& CDonThuc::operator=(const CDonThuc& A)
{
	heso = A.heso;
	somu = A.somu;
	return *this;
}

bool CDonThuc::operator == (const CDonThuc& A)
{
	if ((heso == A.heso && somu == A.somu) || (heso == 0 && A.heso == 0))
		return true;
	return false;
}

bool CDonThuc::operator != (const CDonThuc& A)
{
	if ((heso == A.heso && somu == A.somu) || (heso == 0 && A.heso == 0))
		return false;
	return true;
}