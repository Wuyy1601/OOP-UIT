#include "CDuongTron.h"
#include <iostream>
using namespace std;

CDiem::CDiem()
{
	x = 0;
	y = 0;
}

CDiem::CDiem(float HoanhDoX, float TungDoY)
{
	x = HoanhDoX;
	y = TungDoY;
}

CDiem::CDiem(const CDiem& A)
{
	x = A.x;
	y = A.y;
}


CDuongTron::CDuongTron()
{
	O = CDiem();
	R = 0;
	cout << "Phuong thuc thiet lap mac dinh" << endl;
}

CDuongTron::CDuongTron(CDiem A, float r)
{
	O = A;
	R = r;
	cout << "Phuong thuc thiet lap khi biet day du thong tin" << endl;
}

CDuongTron::CDuongTron(const CDuongTron& A)
{
	O = A.O;
	R = A.R;
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac" << endl;
}

CDuongTron::~CDuongTron()
{
	cout << "Phuong thuc pha huy" << endl;
}
