#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int A , B;
    double x;
    cin >> A >> B;

    cout << "floor " << A << " / " << B << " = " << A/B << endl;
    x = (double)A/B;
    cout << "ceil " << A << " / " << B << " = " << ceil(x) << endl;
    x = (double)A/B;
    cout << "round " << A << " / " << B << " = " << round(x);
    return 0;
}