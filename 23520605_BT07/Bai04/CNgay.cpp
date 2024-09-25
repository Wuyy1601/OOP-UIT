#include "CNgay.h"

istream& operator >> (istream& is, CNgay& a)
{
	cout << "Nhap ngay: ";
	is >> a.ng;
	cout << "Nhap thang: ";
	is >> a.th;
	cout << "Nhap nam: ";
	is >> a.nm;
	return is;
}

ostream& operator << (ostream& os, CNgay a)
{
	os << "Ngay: " << a.ng << "/" << a.th << "/" << a.nm;
	return os;
}

CNgay& CNgay::operator = (const CNgay& A)
{
	ng = A.ng;
	th = A.th;
	nm = A.nm;
	return *this;
}

bool CNgay::operator == (const CNgay& A)
{
	if (ng == A.ng && th == A.th && nm == A.nm)
		return true;
	return false;
}

bool CNgay::operator != (const CNgay& A)
{
	if (ng == A.ng && th == A.th && nm == A.nm)
		return false;
	return true;
}