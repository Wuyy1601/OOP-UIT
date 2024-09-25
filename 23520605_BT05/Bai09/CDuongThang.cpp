#include "CDuongThang.h"
#include <iostream>
using namespace std;

CDuongThang::CDuongThang()
{
	a = 0;
	b = 0;
}
CDuongThang::CDuongThang(int Ya, int Yb)
{
	a = Ya;
	b = Yb;
}
CDuongThang::CDuongThang(const CDuongThang& Y)
{
	a = Y.a;
	b = Y.b;
}

ostream& operator<<(ostream& os, CDuongThang d)
{
	os << "Duong thang : " << d.a << "x + " << d.b;
	return os;
}

CDuongThang& CDuongThang::operator=(CDuongThang& Y)
{
	a = Y.a;
	b = Y.b;
	return *this;
}
