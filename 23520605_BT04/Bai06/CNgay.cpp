#include "CNgay.h"
#include <iostream>
using namespace std;

CNgay::CNgay()
{
	Ngay = 1;
	Thang = 1;
	Nam = 1;
	cout << "Phuong thuc thiet lap mac dinh" << endl;
}
CNgay::CNgay(int ng, int th, int n)
{
	Ngay = ng;
	Thang = th;
	Nam = n;
	cout << "Phuong thuc thiet lap khi biet day du thong tin" << endl;
}
CNgay::CNgay(const CNgay& X)
{
	Ngay = X.Ngay;
	Thang = X.Thang;
	Nam = X.Nam;
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac" << endl;
}
CNgay::~CNgay()
{
	cout << "Phuong thuc pha huy" << endl;
}
