#include "CDiemKhongGian.h"
#include <iostream>
using namespace std;
CDiemKhongGian::CDiemKhongGian()
{
	x = 0;
	y = 0;
	z = 0;
	cout << "Phuong thuc thiet lap mac dinh" << endl;
}
CDiemKhongGian::CDiemKhongGian(float HoanhDoX, float TungDoY, float CaoDoZ)
{
	x = HoanhDoX;
	y = TungDoY;
	z = CaoDoZ;
	cout << "Phuong thuc thiet lap khi biet day du thong tin" << endl;
}

CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian& A)
{
	x = A.x;
	y = A.y;
	z = A.z;
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac" << endl;
}
CDiemKhongGian::~CDiemKhongGian()
{
	cout << "Phuong thuc pha huy" << endl;
}