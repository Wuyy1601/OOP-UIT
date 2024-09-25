#include <iostream>
#include "CHinhCau.h"
using namespace std;

int main()
{
	CHinhCau A;

	CDiemKhongGian G(1, 2, 3);
	CHinhCau B(G, 3.32);

	CHinhCau C(B);

	return 0;
}