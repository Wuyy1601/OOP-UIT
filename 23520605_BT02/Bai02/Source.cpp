#include<iostream>
#include"DIEM.h";
#include<math.h>
using namespace std;

int main()
{
	DIEM P, Q;
	P.Nhap();
	Q.Nhap();
	cout << "Khoang cach hai diem vua nhap la: ";
	float kq = P.KhoangCach(Q);
	cout << kq;
	return 0;
}