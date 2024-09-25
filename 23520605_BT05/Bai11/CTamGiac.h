#pragma once
#include <iostream>
using namespace std;

class CDiem
{
private:
	float x;
	float y;
public:
	friend ostream& operator<<(ostream&, CDiem);
	CDiem();
	CDiem(float, float);
	CDiem(const CDiem&);
};

class CTamGiac
{
	CDiem A, B, C;
public:
	friend ostream& operator<<(ostream&, CTamGiac);
	CTamGiac();
	CTamGiac(CDiem, CDiem, CDiem);
	CTamGiac(const CTamGiac&);
	CTamGiac& operator=(CTamGiac&);
};

