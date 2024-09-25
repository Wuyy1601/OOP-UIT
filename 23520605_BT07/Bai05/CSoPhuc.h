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
	friend istream& operator>>(istream&, CSoPhuc&);
	friend ostream& operator<<(ostream&, CSoPhuc);
	bool operator>(const CSoPhuc&) const;
	bool operator>=(const CSoPhuc&) const;
	bool operator<(const CSoPhuc&) const;
	bool operator<=(const CSoPhuc&) const;
	bool operator==(const CSoPhuc&) const;
};