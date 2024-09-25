#include<iostream>
#include"DIEM.h";
#include<math.h>
using namespace std;

void DIEM::Nhap()
{
	cout << "Nhap hoanh do: ";
	cin >> x;
	cout << endl;
	cout << "Nhap tung do: ";
	cin >> y;
}

float DIEM::KhoangCach(DIEM Q)
{
	float kc = sqrt((x - Q.x) * (x - Q.x) + (y - Q.y) * (y - Q.y));
	return kc;
}