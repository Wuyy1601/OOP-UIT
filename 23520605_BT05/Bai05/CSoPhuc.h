#pragma once
#include <iostream>
using namespace std;
class CSoPhuc
{
	float Thuc;
	float Ao;
public:
	CSoPhuc();
	CSoPhuc(float, float);
	CSoPhuc(const CSoPhuc&);
	friend ostream& operator<<(ostream&, CSoPhuc);
	CSoPhuc& operator=(CSoPhuc&);
};