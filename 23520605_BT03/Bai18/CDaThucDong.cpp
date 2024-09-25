#include "CDaThucDong.h"

istream& operator>>(istream& is, CDaThucDong& A)
{
	cout << "Nhap bac n: ";
	is >> A.n;
	A.a = new float[A.n];
	for (int i = A.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "] : ";
		is >> A.a[i];
	}
	return is;
}
ostream& operator<<(ostream& os, CDaThucDong A)
{
	for (int i = A.n; i > 0; i--)
	{
		os << A.a[i] << "x^" << i << " + ";
	}
	os << A.a[0];
	os << endl;
	return os;
}