#include <iostream>
using namespace std;
#include "CHonSo.h"

int main()
{
	CHonSo s1(3, 5, 2);
	CHonSo s2;
	s2 = s1;
	cout << s2;
	return 0;
}