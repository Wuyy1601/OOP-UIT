#include<iostream>
using namespace std;

struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
void RutGon(PHANSO&);
PHANSO Tong(PHANSO, PHANSO);
PHANSO Hieu(PHANSO, PHANSO);
PHANSO Tich(PHANSO, PHANSO);
PHANSO Thuong(PHANSO, PHANSO);

int main()
{
	PHANSO ps1, ps2;
	cout << "Nhap phan so thu nhat: \n";
	Nhap(ps1);
	cout << "Nhap phan so thu hai: \n";
	Nhap(ps2);
	PHANSO tong = Tong(ps1, ps2);
	PHANSO hieu = Hieu(ps1, ps2);
	PHANSO tich = Tich(ps1, ps2);
	PHANSO thuong = Thuong(ps1, ps2);
	RutGon(tong);
	RutGon(hieu);
	RutGon(tich);
	RutGon(thuong);
	Xuat(ps1);
	Xuat(ps2);
	cout << "Tong = ";
	Xuat(tong);
	cout << "Hieu = ";
	Xuat(hieu);
	cout << "Tich = ";
	Xuat(tich);
	cout << "Thuong = ";
	Xuat(thuong);
	return 1;
}

void Nhap(PHANSO& ps)
{
	cout << "Nhap tu so: ";
	cin >> ps.tu;
	cout << "Nhap mau so: ";
	cin >> ps.mau;
}

void Xuat(PHANSO ps)
{
	cout << ps.tu << "/" << ps.mau << "\n";
}

void RutGon(PHANSO& ps)
{
	int a = abs(ps.tu);
	int b = abs(ps.mau);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	ps.tu = ps.tu / (a + b);
	ps.mau = ps.mau / (a + b);
}

PHANSO Tong(PHANSO ps1, PHANSO ps2)
{
	PHANSO temp;
	temp.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
	temp.mau = ps1.mau * ps2.mau;
	return temp;
}

PHANSO Hieu(PHANSO ps1, PHANSO ps2)
{
	PHANSO temp;
	temp.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
	temp.mau = ps1.mau * ps2.mau;
	return temp;
}

PHANSO Tich(PHANSO ps1, PHANSO ps2)
{
	PHANSO temp;
	temp.tu = ps1.tu * ps2.tu;
	temp.mau = ps1.mau * ps2.mau;
	return temp;
}

PHANSO Thuong(PHANSO ps1, PHANSO ps2)
{
	PHANSO temp;
	temp.tu = ps1.tu * ps2.mau;
	temp.mau = ps1.mau * ps2.tu;
	return temp;
}