#pragma once
#include <iostream>
using namespace std;

class CDuongThang
{
	float a, b, c;
public:
	friend istream& operator>>(istream&, CDuongThang&);
	friend ostream& operator<<(ostream&, CDuongThang);
	CDuongThang& operator=(const CDuongThang&);
	bool operator == (const CDuongThang&);
	bool operator != (const CDuongThang&);
};