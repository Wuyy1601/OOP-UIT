#include<iostream>
using namespace std;
#include<math.h>

#include "TAMGIAC.h"

int main()
{
	DIEM x, y;
	TAMGIAC A, B, C, t;
	t.Nhap();
	float P = t.ChuVi();
	float S = t.DienTich();
	DIEM M = x.TrongTam(t.A, t.B, t.C);
	t.Xuat();
	cout << "Chu vi = " << P << "\n";
	cout << "Dien tich = " << S << endl;
	cout << "Trong Tam = ";
	M.Xuat();
	return 0;
}




