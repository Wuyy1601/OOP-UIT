#include<iostream>
using namespace std;
#include"PS.h"

void PS::Nhap()
{
	cout << "Nhap tu so: ";
	cin >> tu;
	cout << endl;
	cout << "Nhap mau so: ";
	cin >> mau;
}

void PS::Xuat()
{
	cout << tu << "/" << mau;
}

void PS::KiemTra()
{
	if (tu * mau > 0)
		cout << "Phan so duong";
	else if (tu * mau < 0)
		cout << "Phan so am";
	else if (tu * mau == 0 && mau != 0)
		cout << "Phan so bang 0";
}


