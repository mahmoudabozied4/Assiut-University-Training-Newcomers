#include <bits/stdc++.h>
using namespace std;
#define Zied cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define lli long long int
#define ll long long
int arr[100005];

int main()
{
    Zied
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        int g; cin >> g; arr[g]++;
    }
    for (int i = 1; i <= m ; ++i) {
        cout << arr[i] <<endl;
    }

}