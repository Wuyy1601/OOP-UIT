#include "DIEM.h"
#include <iostream>
#include <cmath>
using namespace std;

void DIEM::Nhap()
{
		cout << "Nhap x: ";
		cin >> x;
		cout << " Nhap y: ";
		cin >> y;
}

void DIEM::Xuat()
{
	cout <<"("<< x <<"," << y <<")"<< "\n";
	
}

float DIEM::KhoangCach(DIEM P)
{
	return sqrt((x - P.x) * (x - P.x) + (y - P.y) * (y - P.y));
}

float DIEM::LayX()
{
	return x;
}

void DIEM::CapNhatX(float xMoi)
{
	x = xMoi;
}

float DIEM::LayY()
{
	return y;
}

void DIEM::CapNhatY(float yMoi)
{
	y = yMoi;
}