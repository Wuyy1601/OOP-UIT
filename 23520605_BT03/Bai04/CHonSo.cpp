#include "CHonSo.h"


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

istream& operator>>(istream& is, CHonSo& A)
{
	cout << "Nhap phan phan so: ";
	is >> A.PhanPhanSo;
	cout << "Nhap phan nguyen: ";
	is >> A.PhanNguyen;
	return is;
}

ostream& operator<<(ostream& os, CHonSo A)
{
	os << "Hon So : " << A.PhanNguyen << " + " << A.PhanPhanSo;
	return os;
}

