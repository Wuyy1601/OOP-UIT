#pragma once
#include <iostream>
using namespace std;

class CDiem
{
	float x, y;
public:
	friend istream& operator >> (istream&, CDiem&);
	friend ostream& operator << (ostream&, CDiem);
	CDiem& operator = (const CDiem&);
	bool operator == (const CDiem&);
	bool operator != (const CDiem&);
};