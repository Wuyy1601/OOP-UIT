#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCach(DIEM, DIEM);

int main()
{
	DIEM P, Q;
	cout << "Nhap diem thu nhat: \n";
	Nhap(P);
	cout << "Nhap diem thu hai: \n";
	Nhap(Q);
	float kc = KhoangCach(P, Q);
	Xuat(P);
	Xuat(Q);
	cout << "Khoang cach giua hai diem = " << kc;
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