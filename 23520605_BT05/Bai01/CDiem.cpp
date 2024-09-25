#include "CDiem.h"
#include <iostream>
using namespace std;
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
	os << "(" << A.x << "," << A.y << ")";
	return os;
}

CDiem& CDiem::operator=(CDiem& A)
{
	x = A.x;
	y = A.y;
	return *this;
}