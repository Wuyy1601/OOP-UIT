#pragma once
#include <iostream>
using namespace std;

class CDiem
{
	private:
		float x;
		float y;
	public:
		friend istream& operator>>(istream&, CDiem&);
		friend ostream& operator<<(ostream&, CDiem);
};

class CTamGiac
{
	CDiem A, B, C;
public:
	friend istream& operator>>(istream&, CTamGiac&);
	friend ostream& operator<<(ostream&, CTamGiac);
};

