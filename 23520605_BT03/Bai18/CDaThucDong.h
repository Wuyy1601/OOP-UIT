#pragma once
#include <iostream>
using namespace std;
class CDaThucDong
{
	int n;
	float *a;
public:
	friend istream& operator>>(istream&, CDaThucDong&);
	friend ostream& operator<<(ostream&, CDaThucDong);
};

