#include <iostream>
using namespace std;
#include "CHinhCau.h"

int main()
{
	CDiemKhongGian O(2, 3, 4);
	CHinhCau A(O, 5);
	CHinhCau B;
	B = A;
	cout << B;
	return 0;
}