#include "CDiem.h"
#include <iostream>
using namespace std;
CDiem::CDiem()
{
	x = 0;
	y = 0;
	cout << "Phuong thuc thiet lap mac dinh" << endl;
}

CDiem::CDiem(float HoanhDoX, float TungDoY)
{
	x = HoanhDoX;
	y = TungDoY;
	cout << "Phuong thuc thiet lap khi biet day du thong tin" << endl;
}

CDiem::CDiem(const CDiem& A)
{
	x = A.x;
	y = A.y;
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac" << endl;
}

CDiem::~CDiem()
{
	cout << "Phuong thuc pha huy" << endl;
}
