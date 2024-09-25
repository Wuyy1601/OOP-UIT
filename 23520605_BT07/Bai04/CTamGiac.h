#pragma once
#include "CDiem.h"

class CTamGiac
{
	CDiem A, B, C;
public:
	friend istream& operator>>(istream&, CTamGiac&);
	friend ostream& operator<<(ostream&, CTamGiac);
	CTamGiac& operator=(const CTamGiac&);
	bool operator == (const CTamGiac&);
	bool operator != (const CTamGiac&);
};
