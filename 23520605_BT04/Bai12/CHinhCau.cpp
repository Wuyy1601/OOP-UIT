#include "CHinhCau.h"

#include <iostream>
using namespace std;
CDiemKhongGian::CDiemKhongGian()
{
	x = 0;
	y = 0;
	z = 0;
}
CDiemKhongGian::CDiemKhongGian(float HoanhDoX, float TungDoY, float CaoDoZ)
{
	x = HoanhDoX;
	y = TungDoY;
	z = CaoDoZ;
}

CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian& A)
{
	x = A.x;
	y = A.y;
	z = A.z;
}


CHinhCau::CHinhCau()
{
	O = CDiemKhongGian();
	R = 0;
	cout << "Phuong thuc thiet lap mac dinh" << endl;
}
CHinhCau::CHinhCau(CDiemKhongGian o, float r)
{
	O = o;
	R = r;
	cout << "Phuong thuc thiet lap khi biet day du thong tin" << endl;
}
CHinhCau::CHinhCau(const CHinhCau& C)
{
	O = C.O;
	R = C.R;
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac" << endl;
}
CHinhCau::~CHinhCau()
{
	cout << "Phuong thuc pha huy" << endl;
}