#include "CDonThuc.h"

istream& operator>>(istream& is, CDonThuc& A)
{
	cout << "Nhap he so don thuc: ";
	is >> A.HeSo;
	cout << "Nhap so mu don thuc: ";
	is >> A.SoMu;
	return is;
}
ostream& operator<<(ostream& os, CDonThuc A)
{
	os << "Don thuc: " << A.HeSo << "x^" << A.SoMu;
	return os;
}
