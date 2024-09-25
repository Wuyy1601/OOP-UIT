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
	os << "Hon So : " << A.PhanNguyen << " + " << A.PhanPhanSoTu << "/" << A.PhanPhanSoMau << endl;
	return os;
}

CHonSo& CHonSo::operator=(CHonSo& A)
{
	PhanNguyen = A.PhanNguyen;
	PhanPhanSoTu = A.PhanPhanSoTu;
	PhanPhanSoMau = A.PhanPhanSoMau;
	return *this;
}