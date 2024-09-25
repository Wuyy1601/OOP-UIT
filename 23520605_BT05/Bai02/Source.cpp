#include <iostream>
using namespace std;
#include "CDiemKhongGian.h"

int main()
{
	CDiemKhongGian A(2, 3, 4);
	CDiemKhongGian B;
	B = A;
	cout << B << endl;
	return 0;
}