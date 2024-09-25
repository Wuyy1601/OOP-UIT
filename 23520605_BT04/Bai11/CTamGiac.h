#pragma once
#include <iostream>
using namespace std;

class CDiem
{
private:
	float x;
	float y;
public:
	CDiem();
	CDiem(float, float);
	CDiem(const CDiem&);
};

class CTamGiac
{
	CDiem A, B, C;
public:
	CTamGiac();
	CTamGiac(CDiem, CDiem, CDiem);
	CTamGiac(const CTamGiac&);
	~CTamGiac();
};

