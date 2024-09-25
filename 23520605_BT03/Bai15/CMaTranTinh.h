#pragma once
#include<iostream>
using namespace std;

class CMaTranTinh
{
	int n;
	int m;
	float a[100][100];
public:
	friend istream& operator>>(istream&, CMaTranTinh&);
	friend ostream& operator<<(ostream&, CMaTranTinh);
};

