#include "CPhanSo.h"

istream& operator>>(istream& is, CPhanSo& A)
{
	cout << "Nhap tu so: ";
	is >> A.tu;
	cout << "Nhap mau so: ";
	is >> A.mau;
	while (A.mau == 0)
	{
		cout << "Mau so khong hop le. Nhap lai mau so: ";
		is >> A.mau;
	}
	return is;
}

ostream& operator<<(ostream& os, CPhanSo A)
{
	os << A.tu << "/" << A.mau;
	return os;
}

CPhanSo::CPhanSo()
{
	tu = 0;
	mau = 1;
}

CPhanSo::CPhanSo(int T, int M)
{
	tu = T;
	mau = M;
}

CPhanSo::CPhanSo(const CPhanSo& X)
{
	tu = X.tu;
	mau = X.mau;
}


bool CPhanSo::operator>(const CPhanSo& B) const {
	return tu * B.mau > B.tu * mau;
}

bool CPhanSo::operator>=(const CPhanSo& B) const {
	return tu * B.mau >= B.tu * mau;
}

bool CPhanSo::operator<(const CPhanSo& B) const {
	return tu * B.mau < B.tu * mau;
}

bool CPhanSo::operator<=(const CPhanSo& B) const {
	return tu * B.mau <= B.tu * mau;
}

bool CPhanSo::operator==(const CPhanSo& B) const {
	return tu * B.mau == B.tu * mau;
}