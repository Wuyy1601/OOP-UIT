#include "CDiemKhongGian.h"

istream& operator>>(istream& is, CDiemKhongGian& A)
{
	cout << "Nhap x: ";
	is >> A.x;
	cout << "Nhap y: ";
	is >> A.y;
	cout << "Nhap z: ";
	is >> A.z;
	return is;
}

ostream& operator<<(ostream& os, CDiemKhongGian A)
{
	os << "Diem A(" << A.x << "," << A.y << "," << A.z << ")";
	return os;
}

CDiemKhongGian::CDiemKhongGian()
{
	x = 0;
	y = 0;
	z = 0;
}
CDiemKhongGian::CDiemKhongGian(float HoanhDoX, float TungDoY, float CaoDoZ)
{
	x = HoanhDoX;
	y = TungDoY;
	z = CaoDoZ;
}

CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian& A)
{
	x = A.x;
	y = A.y;
	z = A.z;
}

CDiemKhongGian& CDiemKhongGian::operator=(CDiemKhongGian& A)
{
	x = A.x;
	y = A.y;
	z = A.z;
	return *this;
}