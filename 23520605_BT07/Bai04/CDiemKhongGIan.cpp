#include "CDiemKhongGian.h"

istream& operator>>(istream& is, CDiemKhongGian& a)
{
	cout << "Nhap diem: " << endl;
	cout << "Nhap x: ";
	is >> a.x;
	cout << "Nhap y: ";
	is >> a.y;
	cout << "Nhap z: ";
	is >> a.z;
	return is;
}

ostream& operator<<(ostream& os, CDiemKhongGian a)
{
	os << "Diem: (" << a.x << ", " << a.y << ", " << a.z << ")";
	return os;
}

CDiemKhongGian& CDiemKhongGian::operator=(const CDiemKhongGian& A)
{
	x = A.x;
	y = A.y;
	z = A.z;
	return *this;
}

bool CDiemKhongGian::operator == (const CDiemKhongGian& A)
{
	if (x == A.x && y == A.y && z == A.z)
		return true;
	return false;
}

bool CDiemKhongGian::operator != (const CDiemKhongGian& A)
{
	if (x == A.x && y == A.y && z == A.z)
		return false;
	return true;
}