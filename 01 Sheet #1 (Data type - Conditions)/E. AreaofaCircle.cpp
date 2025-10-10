#include <iostream>
#include <iomanip>

using namespace std;
double pi = 3.141592653;
int main()
{
    double R;
    cin >> R;
    cout << fixed << setprecision(9) << pi * (R * R);

    return 0;
}