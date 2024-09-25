#pragma once
#include <iostream>
using namespace std;
class CDonThuc
{
	int Bac;
	int HeSo;
public:
	CDonThuc();
	CDonThuc(int, int);
	CDonThuc(const CDonThuc&);
	friend ostream& operator<<(ostream&, CDonThuc);
	CDonThuc& operator=(CDonThuc&);
};


