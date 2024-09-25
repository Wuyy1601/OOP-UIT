#include "CMangDong.h"
istream& operator>>(istream& is, CMangDong& A)
{
	cout << "Nhap n: ";
	is >> A.n;
	A.a = new float[A.n];
	for (int i = 0; i < A.n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		is >> A.a[i];
	}
	return is;
}
ostream& operator<<(ostream& os, CMangDong A)
{
	for (int i = 0; i < A.n; i++)
	{
		cout << "a[" << i << "] = " << A.a[i] << endl;
	}
	return os;
}
