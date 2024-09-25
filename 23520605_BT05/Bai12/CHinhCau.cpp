#include "CHinhCau.h"

ostream& operator<<(ostream& os, CDiemKhongGian A)
{
	os << "Diem O(" << A.x << "," << A.y << "," << A.z << ")";
	return os;
}

ostream& operator<<(ostream& os, CHinhCau A)
{
	os << "Tam hinh cau: " << A.O << endl;
	os << "Ban kinh R = " << A.R << endl;
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


CHinhCau::CHinhCau()
{
	O = CDiemKhongGian();
	R = 0;
}
CHinhCau::CHinhCau(CDiemKhongGian o, float r)
{
	O = o;
	R = r;
}
CHinhCau::CHinhCau(const CHinhCau& C)
{
	O = C.O;
	R = C.R;
}

CHinhCau& CHinhCau::operator=(CHinhCau& A)
{
	O = A.O;
	R = A.R;
	return *this;
}