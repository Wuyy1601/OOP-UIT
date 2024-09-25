#include<iostream>
using namespace std;

struct phanso
{
	float tu;
	float mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
int KiemTra(PHANSO);
PHANSO TimPhanSoLonNhat(PHANSO, PHANSO);

int main()
{
	PHANSO x, y;
	Nhap(x);
	Nhap(y);
	PHANSO kq = TimPhanSoLonNhat(x, y);
	Xuat(x);
	Xuat(y);
	cout << "Phan so lon nhat la: ";
	Xuat(kq);
	return 1;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu so: ";
	cin >> x.tu;
	cout << "Nhap mau so: ";
	cin >> x.mau;
}

void Xuat(PHANSO x)
{
	cout << x.tu << "/" << x.mau << "\n";
}

int KiemTra(PHANSO x)
{
	if (x.tu * x.mau > 0)
		return 1;
	if (x.tu * x.mau < 0)
		return -1;
	return 0;
}

PHANSO Hieu(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.tu = x.tu * y.mau - y.tu * x.mau;
	temp.mau = x.mau * y.mau;
	return temp;
}

PHANSO TimPhanSoLonNhat(PHANSO x, PHANSO y)
{
	PHANSO temp = Hieu(x, y);
	if (KiemTra(temp) == -1)
		return y;
	return x;
}