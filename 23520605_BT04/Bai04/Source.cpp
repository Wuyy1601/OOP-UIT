#include <iostream>
#include "CHonSo.h"
using namespace std;

int main()
{
	CHonSo A;

	CHonSo B(1, 2, 3);

	CHonSo C(B);

	return 0;
}