#include <iostream>
using namespace std;

int main()
{
    long long n, x=0, y=1, z;
    cin >>n;
    for (int i = 0; i < n; ++i) {
        cout << x << " ";
        z = x+ y;
        x = y;
        y = z;
    }
    cout << endl;
}