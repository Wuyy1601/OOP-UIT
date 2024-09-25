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
	os << "Diem (" << A.x << "," << A.y << "," << A.z <<")";
	return os;
}
