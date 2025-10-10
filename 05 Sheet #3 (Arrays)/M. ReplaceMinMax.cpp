#include <bits/stdc++.h>
using namespace std;
#define Zied cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define lli long long int
#define ll long long
int main()
{
    Zied
    int n, g, h;
    cin >> n;
    vector<int > v;
    for (int i = 0; i < n; ++i) {
        cin >> g; v.push_back(g);
    }
    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i) {
        if(v[i] == mx){g = i;}
        if(v[i] == mn){h = i;}
    }
    swap(v[g], v[h]);
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout <<endl;

}