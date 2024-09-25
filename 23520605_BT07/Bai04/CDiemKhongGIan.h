#pragma once
#include <iostream>
using namespace std;

class CDiemKhongGian
{
	float x, y, z;
public:
	friend istream& operator>>(istream&, CDiemKhongGian&);
	friend ostream& operator<<(ostream&, CDiemKhongGian);
	CDiemKhongGian& operator=(const CDiemKhongGian&);
	bool operator == (const CDiemKhongGian&);
	bool operator != (const CDiemKhongGian&);
};