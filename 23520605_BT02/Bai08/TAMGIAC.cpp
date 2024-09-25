#include<iostream>
using namespace std;
#include<math.h>
#include "TAMGIAC.h"

void DIEM::Nhap()
{
	cout << "Nhap hoanh do: ";
	cin >> x;
	cout << "Nhap tung do: ";
	cin >> y;
}

void DIEM::Xuat()
{
	cout << "(" << x << "," << y << ")" << endl;
}

float DIEM::KhoangCach(DIEM Q)
{
	float kc = sqrt((x - Q.x) * (x - Q.x) + (y - Q.y) * (y - Q.y));
	return kc;
}

DIEM DIEM::TrongTam(DIEM P, DIEM Q, DIEM K)
{
	DIEM temp;
	temp.x = (P.x + Q.x + K.x) / 3;
	temp.y = (P.y + Q.y + K.y) / 3;
	return temp;
}


void TAMGIAC::Nhap()
{
	cout << "Nhap diem A " << endl;
	A.Nhap();
	cout << "Nhap diem B " << endl;
	B.Nhap();
	cout << "Nhap diem C " << endl;
	C.Nhap();
}

void TAMGIAC::Xuat()
{
	cout << "Diem A: ";
	A.Xuat();
	cout << "Diem B: ";
	B.Xuat();

	cout << "Diem C: ";
	C.Xuat();
}

float TAMGIAC::ChuVi()
{
	float a = A.KhoangCach(B);
	float b = B.KhoangCach(C);;
	float c = A.KhoangCach(C);
	return (a + b + c);
}
float TAMGIAC::DienTich()
{
	float a = A.KhoangCach(B);
	float b = B.KhoangCach(C);
	float c = A.KhoangCach(C);
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
