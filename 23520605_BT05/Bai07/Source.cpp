#include <iostream>
#include "CThoiGian.h"
using namespace std;

int main()
{
	CThoiGian X(2, 5, 7);
	CThoiGian Y;
	Y = X;
	cout << Y;
	return 0;
}