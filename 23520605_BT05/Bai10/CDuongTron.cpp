#include "CDuongTron.h"
#include <iostream>
using namespace std;

ostream& operator<<(ostream& os, CDuongTron A)
{
	os << "Tam duong tron: " << A.O << endl;
	os << "Ban kinh R = " << A.R << endl;
	return os;
}
ostream& operator<<(ostream& os, CDiem A)
{
	os << "Diem O(" << A.x << "," << A.y << ")";
	return os;
}
CDiem::CDiem()
{
	x = 0;
	y = 0;
}

CDiem::CDiem(float HoanhDoX, float TungDoY)
{
	x = HoanhDoX;
	y = TungDoY;
}

CDiem::CDiem(const CDiem& A)
{
	x = A.x;
	y = A.y;
}


CDuongTron::CDuongTron()
{
	O = CDiem();
	R = 0;
}

CDuongTron::CDuongTron(CDiem A, float r)
{
	O = A;
	R = r;
}

CDuongTron::CDuongTron(const CDuongTron& A)
{
	O = A.O;
	R = A.R;
}

CDuongTron& CDuongTron::operator=(CDuongTron& X)
{
	R = X.R;
	O = X.O;
	return *this;
}

