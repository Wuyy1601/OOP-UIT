#pragma once
#include <iostream>
using namespace std;

class CMangTinh
{
	int n;
	float a[100];
public:
	friend istream& operator>>(istream&, CMangTinh&);
	friend ostream& operator<<(ostream&, CMangTinh);
};

