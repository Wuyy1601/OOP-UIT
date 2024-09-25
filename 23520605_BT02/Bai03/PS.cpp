#include<iostream>
#include"PS.h"
using namespace std;

void PS::Nhap()
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

void PS::Xuat()
{
	cout << tu << "/" << mau << endl;
}

int PS::Check()
{
	if (tu * mau > 0)
		return 1;
	else if (tu * mau < 0)
		return -1;
	else if (tu * mau == 0 && mau != 0)
		return 0;
}

PS PS::Hieu(PS y)
{
	PS  temp;
	temp.tu = tu * y.mau - y.tu * mau;
	temp.mau = mau * y.mau;
	return temp;
}

PS PS::Max(PS y)
{
	PS temp = this->Hieu(y);
	if (temp.Check() == -1)
		return y;
	return *this;
}

