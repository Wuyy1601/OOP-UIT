#pragma once
#include <iostream>
using namespace std;

class CHinhCau
{
	float x, y, z, r;
public:
	friend istream& operator>>(istream&, CHinhCau&);
	friend ostream& operator<<(ostream&, CHinhCau);
	CHinhCau& operator=(const CHinhCau&);
	bool operator == (const CHinhCau&);
	bool operator != (const CHinhCau&);
};