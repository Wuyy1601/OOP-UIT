#include <iostream>
#include "CSoPhuc.h"
using namespace std;

int main()
{
    CSoPhuc s1, s2;
    cout << "Nhap so phuc thu nhat: " << endl;
    cin >> s1;
    cout << "Nhap so phuc thu hai: " << endl;
    cin >> s2;
    if (s1 > s2) {
        cout << s1 << " > " << s2 << endl;
    }
    if (s1 >= s2) {
        cout << s1 << " >= " << s2 << endl;
    }
    if (s1 < s2) {
        cout << s1 << " < " << s2  << endl;
    }
    if (s1 <= s2) {
        cout << s1 << " <= " << s2 << endl;
    }
    if (s1 == s2) {
        cout << s1 << " == " << s2 << endl;
    }
    else {
        cout << s1 << " != " << s2 << endl;
    }
    return 0;
}