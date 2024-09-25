#include "CMaTranTinh.h"

istream& operator>>(istream& is, CMaTranTinh& A)
{
	cout << "Nhap so hang: ";
	is >> A.m;
	cout << "Nhap so cot: ";
	is >> A.n;
	for (int i = 0; i < A.m; i++)
	{
		for (int j = 0; j < A.n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] = ";
			is >> A.a[i][j];
		}
	}
	return is;
}
ostream& operator<<(ostream& os, CMaTranTinh A)
{
	for (int i = 0; i < A.m; i++)
	{
		for (int j = 0; j < A.n; j++)
		{
			os << A.a[i][j] << " ";
		}
		cout << endl;
	}
	return os;
}