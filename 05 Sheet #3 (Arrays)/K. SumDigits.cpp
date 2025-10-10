#include <bits/stdc++.h>
using namespace std;
#define Zied cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define lli long long int
#define ll long long
int main()
{
    Zied
    int n, v=0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        v += (s[i]-'0');
    }
    cout << v << endl;
}