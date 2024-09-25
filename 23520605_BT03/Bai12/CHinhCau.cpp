#include "CHinhCau.h"
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
	os << "Diem O(" << A.x << "," << A.y << "," << A.z << ")";
	return os;
}


istream& operator>>(istream& is, CHinhCau& A)
{
	cout << "Nhap tam hinh cau O: ";
	is >> A.O;
	cout << "Nhap ban kinh R = ";
	is >> A.R;
	return is;
}
ostream& operator<<(ostream& os, CHinhCau A)
{
	os << "Tam hinh cau: " << A.O << endl;
	os << "Ban kinh R = " << A.R << endl;
	return os;
}
