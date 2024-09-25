#include<iostream>
using namespace std;

struct sophuc
{
	float thuc;
	float ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Tong(SOPHUC, SOPHUC);
SOPHUC Hieu(SOPHUC, SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);
SOPHUC Thuong(SOPHUC, SOPHUC);

int main()
{
	SOPHUC x, y;
	Nhap(x);
	Nhap(y);
	SOPHUC tong = Tong(x, y);
	SOPHUC hieu = Hieu(x, y);
	SOPHUC tich = Tich(x, y);
	SOPHUC thuong = Thuong(x, y);
	Xuat(x);
	Xuat(y);
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

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.thuc;
	cout << "Nhap phan ao: ";
	cin >> x.ao;
}

void Xuat(SOPHUC x)
{
	cout << x.thuc << " + " << x.ao << "i\n";
}

SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.thuc = x.thuc + y.thuc;
	temp.ao = x.ao + y.ao;
	return temp;
}

SOPHUC Hieu(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.thuc = x.thuc - y.thuc;
	temp.ao = x.ao - y.ao;
	return temp;
}

SOPHUC Tich(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.thuc = x.thuc * y.thuc - x.ao * y.ao;
	temp.ao = x.thuc * y.ao + x.ao * y.thuc;
	return temp;
}

SOPHUC Thuong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.thuc = (x.thuc * y.thuc + x.ao * y.ao) / (y.thuc * y.thuc + y.ao * y.ao);
	temp.ao = (x.ao * y.thuc - x.thuc * y.ao) / (y.thuc * y.thuc + y.ao * y.ao);
	return temp;
}