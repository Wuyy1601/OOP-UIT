#include "CPhanSo.h"
#include <iostream>
using namespace std;

CPhanSo::CPhanSo()
{
	Tu = 0;
	Mau = 1;
	cout << "Phuong thuc thiet lap mac dinh" << endl;
}

CPhanSo::CPhanSo(int T, int M)
{
	Tu = T;
	Mau = M;
	cout << "Phuong thuc thiet lap khi biet day du thong tin" << endl;
}

CPhanSo::CPhanSo(const CPhanSo& X)
{
	Tu = X.Tu;
	Mau = X.Mau;
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac" << endl;

}
CPhanSo::~CPhanSo()
{
	cout << "Phuong thuc pha huy" << endl;
}
