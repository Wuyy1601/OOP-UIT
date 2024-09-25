#pragma once
#include <iostream>
using namespace std;

class CMangDong
{
	int n;
	float *a;
public:
	friend istream& operator>>(istream&, CMangDong&);
	friend ostream& operator<<(ostream&, CMangDong);
};

