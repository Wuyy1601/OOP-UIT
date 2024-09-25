#include <iostream>
#include "CMatPhang.h"
#include "CHinhVuong.h"
#include "CHinhThoi.h"
using namespace std;

int main()
{
	CMatPhang P;
	P.Nhap();
	P.Xuat();
	float s = P.TongDienTich();
	cout << "Tong dien tich cac hinh trong mat phang: " << s << endl;
	return 0;
}