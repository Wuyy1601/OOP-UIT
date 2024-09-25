#include<iostream>
using namespace std;
#include"PS.h"

int main()
{
	PS ps;
	ps.Nhap();
	cout << "Phan so vua nhap la: ";
	ps.Xuat();
	cout << endl;
	ps.KiemTra();
	return 0;
}