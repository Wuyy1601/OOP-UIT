#pragma once
#include <iostream>
using namespace std;

class CDaThucTinh
{
	int n;
	float a[100];
public:
	friend istream& operator>>(istream&, CDaThucTinh&);
	friend ostream& operator<<(ostream&, CDaThucTinh);
};

