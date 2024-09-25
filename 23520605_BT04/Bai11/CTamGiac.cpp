#include "CTamGiac.h"
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

CTamGiac::CTamGiac()
{
	A = CDiem();
	B = CDiem();
	C = CDiem();
	cout << "Phuong thuc thiet lap mac dinh" << endl;
}

CTamGiac::CTamGiac(CDiem D, CDiem E, CDiem F)
{
	A = D;
	B = E;
	C = F;
	cout << "Phuong thuc thiet lap khi biet day du thong tin" << endl;
}

CTamGiac::CTamGiac(const CTamGiac& G)
{
	A = G.A;
	B = G.B;
	C = G.C;
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac" << endl;
}
CTamGiac::~CTamGiac()
{
	cout << "Phuong thuc pha huy" << endl;
}
