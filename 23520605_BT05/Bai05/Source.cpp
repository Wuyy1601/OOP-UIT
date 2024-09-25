#include <iostream>
using namespace std;
#include "CSoPhuc.h"

int main()
{
	CSoPhuc s1(3, 4);
	CSoPhuc s2;
	s2 = s1;
	cout << s2;
	return 0;
}