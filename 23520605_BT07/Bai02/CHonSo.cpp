#include "CHonSo.h"
#include<iostream>
using namespace std;

CHonSo::CHonSo()
{
	PhanNguyen = 0;
	PhanPhanSoTu = 0;
	PhanPhanSoMau = 1;
}
CHonSo::CHonSo(int PN, int T, int M)
{
	PhanNguyen = PN;
	PhanPhanSoTu = T;
	PhanPhanSoMau = M;
}
CHonSo::CHonSo(const CHonSo& A)
{
	PhanNguyen = A.PhanNguyen;
	PhanPhanSoTu = A.PhanPhanSoTu;
	PhanPhanSoMau = A.PhanPhanSoMau;
}

ostream& operator<<(ostream& os, CHonSo A)
{
	os << "Hon So : " << A.PhanNguyen << " + " << A.PhanPhanSoTu << "/" << A.PhanPhanSoMau;
	return os;
}

istream& operator>>(istream& is, CHonSo& A)
{
	cout << "Nhap phan nguyen: ";
	is >> A.PhanNguyen;
	cout << "Nhap phan phan so: " << endl;
	cout << "Tu so: ";
	is >> A.PhanPhanSoTu;
	cout << "Mau so: ";
	is >> A.PhanPhanSoMau;
	return is;
}

bool CHonSo::operator>(const CHonSo& A) const
{
	return (PhanNguyen + (PhanPhanSoTu / PhanPhanSoMau) > A.PhanNguyen + (A.PhanPhanSoTu / A.PhanPhanSoMau));
}
bool CHonSo::operator>=(const CHonSo& A) const
{
	return (PhanNguyen + (PhanPhanSoTu / PhanPhanSoMau) >= A.PhanNguyen + (A.PhanPhanSoTu / A.PhanPhanSoMau));
}
bool CHonSo::operator<(const CHonSo& A) const
{
	return (PhanNguyen + (PhanPhanSoTu / PhanPhanSoMau) < A.PhanNguyen + (A.PhanPhanSoTu / A.PhanPhanSoMau));
}
bool CHonSo::operator<=(const CHonSo& A) const
{
	return (PhanNguyen + (PhanPhanSoTu / PhanPhanSoMau) <= A.PhanNguyen + (A.PhanPhanSoTu / A.PhanPhanSoMau));
}
bool CHonSo::operator==(const CHonSo& A) const
{
	return (PhanNguyen + (PhanPhanSoTu / PhanPhanSoMau) == A.PhanNguyen + (A.PhanPhanSoTu / A.PhanPhanSoMau));
}