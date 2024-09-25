#include "CSoPhuc.h"
#include <iostream>
using namespace std;

CSoPhuc::CSoPhuc()
{
	Thuc = 0;
	Ao = 0;
	cout << "Phuong thuc thiet lap mac dinh" << endl;
}
CSoPhuc::CSoPhuc(float T, float A)
{
	Thuc = T;
	Ao = A;
	cout << "Phuong thuc thiet lap khi biet day du thong tin" << endl;
}
CSoPhuc::CSoPhuc(const CSoPhuc& A)
{
	Thuc = A.Thuc;
	Ao = A.Ao;
	cout << "Phuong thuc thiet lap sao chep thong tin tu doi tuong khac" << endl;
}
CSoPhuc::~CSoPhuc()
{
	cout << "Phuong thuc pha huy" << endl;
}
