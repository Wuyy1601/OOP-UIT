#include "CHonSo.h"
#include<iostream>
using namespace std;

CHonSo::CHonSo()
{
	PhanNguyen = 0;
	PhanPhanSoTu = 0;
	PhanPhanSoMau = 1;
	cout << "Phuong thuc thiet lap mac dinh" << endl;
}
CHonSo::CHonSo(int PN, int T, int M)
{
	PhanNguyen = PN;
	PhanPhanSoTu = T;
	PhanPhanSoMau = M;
	cout << "Phuong thuc thiet lap khi biet day du thong tin" << endl;
}
CHonSo::CHonSo(const CHonSo& A)
{
	PhanNguyen = A.PhanNguyen;
	PhanPhanSoTu = A.PhanPhanSoTu;
	PhanPhanSoMau = A.PhanPhanSoMau;
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac" << endl;
}
CHonSo::~CHonSo()
{
	cout << "Phuong thuc pha huy" << endl;
}

