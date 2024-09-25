#include <iostream>
#include "DIEM.h"
#include "TAMGIAC.h"
using namespace std;

int main()
{
	TAMGIAC tg;
	tg.Nhap();
	tg.Xuat();
	if (tg.KiemTraTamGiac() == 1)
	{
		cout << "Tam giac hop le." << endl;
	}
	else
	{
		cout << "Tam giac khong hop le" << endl;
		return 0;
	}
	float P = tg.Chuvi();
	cout << "Chu vi = " << P << endl;
	float S = tg.DienTich();
	cout << "Dien tich = " << S << endl;
	DIEM G = tg.TrongTam();
	G.Xuat();

	return 0;
}