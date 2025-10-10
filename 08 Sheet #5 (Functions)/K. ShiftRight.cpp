#include <iostream>
#include <deque>
using namespace std;

void Shift(int n, int x)
{
    deque <int> dq;
    for (int i = 0; i < n; i++)
    {
        int input; cin >> input;
        dq.push_back(input);
    }
    for (int i = 0; i < x; i++)
    {
        dq.push_front(dq.back());
        dq.pop_back();
    }
    for (int i = 0; i < n; i++)
        cout << dq[i] << " ";
}

int main()
{
    int n, x;
    cin >> n >> x;
    Shift(n, x);
}
