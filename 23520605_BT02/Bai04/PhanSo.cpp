#include<iostream>
#include<math.h>
using namespace std;
#include"PhanSo.h"

void PhanSo::Nhap()
{
	cout << "Nhap tu so: ";
	cin >> tu;
	cout << endl;

	do {
		cout << "Nhap mau so (khac 0): ";
		cin >> mau;
		if (mau == 0) {
			cout << "Mau so khong the bang 0. Vui long nhap lai." << endl;
		}
	} while (mau == 0);
}

void PhanSo::Xuat()
{
	cout << tu << "/" << mau << endl;
}


int PhanSo::GCD(int   a, int   b) {
	if (b == 0) return a;
	else return GCD(b, a % b);
}

PhanSo  PhanSo::RutGon(PhanSo x)
{
	int ucln = GCD(x.tu, x.mau);
	x.tu /= ucln;
	x.mau /= ucln;
	return x;
}

PhanSo PhanSo::Tong(PhanSo ps2)
{
	PhanSo temp;
	temp.tu = tu * ps2.mau + ps2.tu * mau;
	temp.mau = mau * ps2.mau;
	return temp.RutGon(temp);
}

PhanSo PhanSo::Hieu(PhanSo ps2)
{
	PhanSo temp;
	temp.tu = tu * ps2.mau - ps2.tu * mau;
	temp.mau = mau * ps2.mau;
	return temp.RutGon(temp);
}

PhanSo PhanSo::Tich(PhanSo ps2)
{
	PhanSo temp;
	temp.tu = tu * ps2.tu;
	temp.mau = mau * ps2.mau;
	return temp.RutGon(temp);
}
