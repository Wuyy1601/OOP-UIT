#include "CDiem.h"
#include <iostream>
using namespace std;

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

CDiem& CDiem::operator++()
{

}
