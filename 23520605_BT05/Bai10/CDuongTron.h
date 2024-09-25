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
	friend ostream& operator<<(ostream&, CDiem);
};

class CDuongTron
{
	CDiem O;
	float R;
public:
	CDuongTron();
	CDuongTron(CDiem, float);
	CDuongTron(const CDuongTron&);
	friend ostream& operator<<(ostream&, CDuongTron);
	CDuongTron& operator=(CDuongTron&);
};
