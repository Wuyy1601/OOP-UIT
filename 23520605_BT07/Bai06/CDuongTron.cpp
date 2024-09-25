#include "CDuongTron.h"
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
	os << "Diem O(" << A.x << "," << A.y << ")";
	return os;
}

istream& operator>>(istream& is, CDuongTron& A)
{
	cout << "Nhap tam duong tron: " << endl;
	is >> A.O;
	cout << "Nhap ban kinh duong tron: ";
	is >> A.R;
	return is;
}

ostream& operator<<(ostream& os, CDuongTron A)
{
	os << "Tam duong tron: \n" << A.O << endl;
	os << "Ban kinh R = " << A.R << endl;
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

bool CDuongTron::operator>(const CDuongTron& A) const
{
	return R > A.R;
}
bool CDuongTron::operator>=(const CDuongTron& A) const
{
	return R >= A.R;
}
bool CDuongTron::operator<(const CDuongTron& A) const
{
	return R < A.R;
}
bool CDuongTron::operator<=(const CDuongTron& A) const
{
	return R <= A.R;
}
bool CDuongTron::operator==(const CDuongTron& A) const
{
	return R == A.R;
}


