#include "CMangTinh.h"

istream& operator>>(istream& is, CMangTinh& A)
{
	cout << "Nhap n: ";
	is >> A.n;
	for (int i = 0; i < A.n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		is >> A.a[i];
	}
	return is;
}
ostream& operator<<(ostream& os, CMangTinh A)
{
	for (int i = 0; i < A.n; i++)
	{
		cout << "a[" << i << "] = " << A.a[i] << endl;
	}
	return os;
}
