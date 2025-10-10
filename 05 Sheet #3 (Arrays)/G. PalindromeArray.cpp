#include <bits/stdc++.h>
using namespace std;
#define Zied cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define lli long long int
#define ll long long
int main()
{
    Zied
    int t, g; cin >> t;
    vector<int > v;
    for (int i = 0; i < t; ++i) {
        cin >> g; v.push_back(g);
    }
    for (int i = 0, k = t-1; i < k ; ++i, k--) {
        if(v[i] != v[k]){
            cout << "NO" <<endl;
            return 0;
        }
    }
    cout << "YES" <<endl;

}
