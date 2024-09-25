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



bool CDiem::operator>(const CDiem& A) const
{
	float result1 = sqrt(x * x + y * y);
	float result2 = sqrt(A.x * A.x + A.y * A.y);
	return result1 > result2;
}
bool CDiem::operator>=(const CDiem& A) const
{
	float result1 = sqrt(x * x + y * y);
	float result2 = sqrt(A.x * A.x + A.y * A.y);
	return result1 >= result2;
}
bool CDiem::operator<(const CDiem& A) const
{
	float result1 = sqrt(x * x + y * y);
	float result2 = sqrt(A.x * A.x + A.y * A.y);
	return result1 < result2;
}
bool CDiem::operator<=(const CDiem& A) const
{
	float result1 = sqrt(x * x + y * y);
	float result2 = sqrt(A.x * A.x + A.y * A.y);
	return result1 <= result2;
}
bool CDiem::operator==(const CDiem& A) const
{
	float result1 = sqrt(x * x + y * y);
	float result2 = sqrt(A.x * A.x + A.y * A.y);
	return result1 == result2;
}
