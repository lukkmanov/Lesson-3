#include <iostream>

using namespace std;

int main()
{
    int a, b = 21;
    int mi, ma;
    cout << "Enter the number" << endl;
    cin >> a;
    mi = (a < b == 0) + (b-a) ;
    ma = (a > b == 0) + (a * 2 ) ;
    cout << mi << endl;    cout << ma << endl;
    return 0;
}