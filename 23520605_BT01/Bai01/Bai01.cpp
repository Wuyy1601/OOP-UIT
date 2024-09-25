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

int main()
{
	PHANSO x;
	Nhap(x);
	int kq = KiemTra(x);
	Xuat(x);
	switch (kq)
	{
	case 1: cout << "\nPhan so > 0 ";
		break;
	case -1: cout << "\nPhan so < 0";
		break;
	case 0: cout << "\nPhan so = 0";
		break;
	}
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
	cout << "Tu so = " << x.tu << "\n";
	cout << "Mau so = " << x.mau;
}

int KiemTra(PHANSO x)
{
	if (x.tu * x.mau > 0)
		return 1;
	if (x.tu * x.mau < 0)
		return -1;
	return 0;
}