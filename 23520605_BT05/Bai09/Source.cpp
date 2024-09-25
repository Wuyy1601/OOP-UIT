#include <iostream>
#include "CDuongThang.h"
using namespace std;

int main()
{
	CDuongThang Y(1, 2);
	CDuongThang A;
	A = Y;
	cout << A;
	return 0;
}