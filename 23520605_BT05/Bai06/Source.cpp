#include "CNgay.h"
#include <iostream>
using namespace std;

int main()
{
	CNgay A(12, 1, 2005);
	CNgay B;
	B = A;
	cout << B;
	return 0;
}