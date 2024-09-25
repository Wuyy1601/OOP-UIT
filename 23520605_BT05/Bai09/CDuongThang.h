#pragma once
#include <iostream>
using namespace std;
class CDuongThang
{
	float a;
	float b;
public:
	friend ostream& operator<<(ostream&, CDuongThang);
	CDuongThang();
	CDuongThang(int, int);
	CDuongThang(const CDuongThang&);
	CDuongThang& operator=(CDuongThang&);
};