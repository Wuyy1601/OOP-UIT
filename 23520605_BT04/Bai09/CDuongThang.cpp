#include "CDuongThang.h"
#include <iostream>
using namespace std;

CDuongThang::CDuongThang()
{
	a = 0;
	b = 0;
	cout << "Phuong thuc thiet lap mac dinh" << endl;
}
CDuongThang::CDuongThang(int Ya, int Yb)
{
	a = Ya;
	b = Yb;
	cout << "Phuong thuc thiet lap khi biet day du thong tin" << endl;
}
CDuongThang::CDuongThang(const CDuongThang& Y)
{
	a = Y.a;
	b = Y.b;
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac" << endl;

}
CDuongThang::~CDuongThang()
{
	cout << "Phuong thuc pha huy" << endl;
}
