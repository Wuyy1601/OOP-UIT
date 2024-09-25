#include<iostream>
#include"PS.h"
using namespace std;

int main()
{
	PS x, y;
	x.Nhap();
	cout << "Phan so vua nhap la: ";
	x.Xuat();
	y.Nhap();
	cout << "Phan so vua nhap la: ";
	y.Xuat();
	PS kq = x.Max(y);
	cout << "Phan so lon nhat la :";
	kq.Xuat();
	return 0;
}

