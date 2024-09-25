#include "CMaTranDong.h"

istream& operator>>(istream& is, CMaTranDong& A)
{
	cout << "Nhap so hang: ";
	is >> A.m;
	cout << "Nhap so cot: ";
	is >> A.n;
	A.a = new float* [A.m];
	for (int i = 0; i < A.m; i++)
	{
		A.a[i] = new float[A.n];
		for (int j = 0; j < A.n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] = ";
			is >> A.a[i][j];
		}
	}
	return is;
}
ostream& operator<<(ostream& os, CMaTranDong A)
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