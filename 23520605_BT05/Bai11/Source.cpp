#include <iostream>
#include "CTamGiac.h"
using namespace std;

int main()
{
	CDiem A(2, 3);
	CDiem B(3, 1);
	CDiem C(2, 5);
	CTamGiac X(A, B, C);
	CTamGiac Y;
	Y = X;
	cout << X;
	return 0;

}