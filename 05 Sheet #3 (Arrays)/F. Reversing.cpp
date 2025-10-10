#include <bits/stdc++.h>
using namespace std;
#define Zied cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define lli long long int
#define ll long long
int main() {
    Zied
    int n, g;
    cin >> n;
    vector<int>v;
    for (int i = 0; i < n; ++i) {
        cin >> g; v.push_back(g);
    }
    for (int i = n-1; i >=0 ; i--) {
        cout << v[i] << " ";
    }
    cout << endl;


}