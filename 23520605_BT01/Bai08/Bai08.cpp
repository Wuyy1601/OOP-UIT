#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct tamgiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);
float KhoangCach(DIEM, DIEM);
float ChuVi(TAMGIAC);
float DienTich(TAMGIAC);

int main()
{
	TAMGIAC t;
	Nhap(t);
	float P = ChuVi(t);
	float S = DienTich(t);
	Xuat(t);
	cout << "Chu vi = " << P << "\n";
	cout << "Dien tich = " << S;
	return 1;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "(" << P.x << ", " << P.y << ")\n";
}

float KhoangCach(DIEM P, DIEM Q)
{
	float kc = sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
	return kc;
}

void Nhap(TAMGIAC& t)
{
	cout << "Nhap diem A : \n";
	Nhap(t.A);
	cout << "Nhap diem B : \n";
	Nhap(t.B);
	cout << "Nhap diem C : \n";
	Nhap(t.C);
}

void Xuat(TAMGIAC t)
{
	cout << "Diem A: ";
	Xuat(t.A);
	cout << "Diem B: ";
	Xuat(t.B);
	cout << "Diem C: ";
	Xuat(t.C);
}

float ChuVi(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);
	return (a + b + c);
}

float DienTich(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}