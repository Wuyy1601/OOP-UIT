#include "CDonThuc.h"
#include <iostream>
using namespace std;
CDonThuc::CDonThuc()
{
	Bac = 0;
	HeSo = 0;
}
CDonThuc::CDonThuc(int n, int a)
{
	Bac = n;
	HeSo = a;
}
CDonThuc::CDonThuc(const CDonThuc& X)
{
	Bac = X.Bac;
	HeSo = X.HeSo;
}

ostream& operator<<(ostream& os, CDonThuc A)
{
	os << "Don thuc: " << A.HeSo << "x^" << A.Bac;
	return os;
}

CDonThuc& CDonThuc::operator=(CDonThuc& A)
{
	HeSo = A.HeSo;
	Bac = A.Bac;
	return *this;
}