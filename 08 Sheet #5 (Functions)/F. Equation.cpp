#include <iostream>
#include <cmath>
using namespace std;

long long Equation(int x, int n)
{
    // NOTE that pow(X, 0) - 1 = 0, so we don't need to type it
    long long sum = 0;
    if (n % 2 == 0)
    {
        for (int i = 2; i <= n; i += 2)	{
            sum += pow(x, i);
        }
    }
    else
    {
        for (int i = 2; i < n; i += 2) {
            sum += pow(x, i);
        }
    }
    return sum;
}
int main()
{

    int x, n; cin >> x >> n;
    cout << Equation(x, n);
}
