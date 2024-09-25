#pragma once
#include <iostream>
using namespace std;

class CSoPhuc
{
		float thuc;
		float ao;
	public:
		friend istream& operator>>(istream&, CSoPhuc&);
		friend ostream& operator<<(ostream&, CSoPhuc);
};
