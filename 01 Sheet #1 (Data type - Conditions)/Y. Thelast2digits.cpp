#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    long long A,B,C,D;

    cin >> A >> B >> C >> D;
    int Ans = (A%100 * B%100 * C%100 * D%100);
    (Ans < 10) ? cout << 0 << Ans : cout << Ans;
    return 0;
}