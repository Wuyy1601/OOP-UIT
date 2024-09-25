#include <iostream>
#include "CTamGiac.h"
using namespace std;

int main()
{
	CTamGiac M;

	CDiem A(0,1);
	CDiem B(2, 3);
	CDiem C(4, 5);
	CTamGiac N(A, B, C);

	CTamGiac X(N);
	return 0;
}