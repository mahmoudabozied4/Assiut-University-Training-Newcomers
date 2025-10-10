#include <bits/stdc++.h>
using namespace std;
#define Zied cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define lli long long int
#define ll long long
int main()
{
    Zied
    int t, g; cin >> t;
    vector<int> v, b;
    for (int i = 0; i < t; ++i) {
        cin >> g; v.push_back(g);
    }
    for (int i = 0; i < t; ++i) {
        cin >> g; b.push_back(g);
    }
    sort(v.begin(), v.end());
    sort(b.begin(), b.end());
    cout << (v==b ? "yes" : "no") <<endl;
}