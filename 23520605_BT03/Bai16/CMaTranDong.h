#pragma once
#include<iostream>
using namespace std;

class CMaTranDong
{
	int n;
	int m;
	float **a;
public:
	friend istream& operator>>(istream&, CMaTranDong&);
	friend ostream& operator<<(ostream&, CMaTranDong);
};
