#pragma once
#include <iostream>
using namespace std;
class CDiem
{
	float x;
	float y;
public:
	CDiem();
	CDiem(float, float);
	CDiem(const CDiem&);
	friend istream& operator>>(istream&, CDiem&);
	friend ostream& operator<<(ostream&, CDiem);
	bool operator>(const CDiem&) const;
	bool operator>=(const CDiem&) const;
	bool operator<(const CDiem&) const;
	bool operator<=(const CDiem&) const;
	bool operator==(const CDiem&) const;
};
