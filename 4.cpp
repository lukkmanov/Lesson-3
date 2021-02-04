#include <iostream>

using namespace std;

int main()
{
  int b,a[3][3][3];
 // a[1][1][1] = 1;
  int *pa = &b;
  *pa = a[1][1][1];
  cout << a << endl;
  cout << *pa << endl;
}
