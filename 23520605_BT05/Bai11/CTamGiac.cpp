#include "CTamGiac.h"
#include <iostream>
using namespace std;

ostream& operator<<(ostream& os, CTamGiac TamGiac)
{
	cout << "Tam giac co 3 diem : " << endl;
	cout << "Diem A";
	os << TamGiac.A << endl;
	cout << "Diem B";
	os << TamGiac.B << endl;
	cout << "Diem C";
	os << TamGiac.C << endl;
	return os;
}
ostream& operator<<(ostream& os, CDiem A)
{
	os << "(" << A.x << "," << A.y << ")";
	return os;
}

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
}

CTamGiac::CTamGiac(CDiem D, CDiem E, CDiem F)
{
	A = D;
	B = E;
	C = F;
}

CTamGiac::CTamGiac(const CTamGiac& G)
{
	A = G.A;
	B = G.B;
	C = G.C;
}

CTamGiac& CTamGiac::operator=(CTamGiac& X)
{
	A = X.A;
	B = X.B;
	C = X.C;
	return*this;
}
