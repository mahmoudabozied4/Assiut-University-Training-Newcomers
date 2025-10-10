#include <bits/stdc++.h>
using namespace std;
#define Zied cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define lli long long int
#define ll long long
#define INFLL 1e18
#define INF 1e9
#define MOD 1000000007
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define vbe(v) ((v).begin()), ((v).end())
ll GCD(ll a, ll b) { return (a) ? GCD(b % a, a) : b; }
ll LCM(ll a, ll b) { return a * b / GCD(a, b); }
ll fastpow(ll b, ll p) { if (!p) return 1; ll ret = fastpow(b, p >> 1); ret *= ret; if (p & 1) ret *= b; return ret; }


int main() {
    Zied
    ll n, sum=0;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum+= arr[i];
    }
    cout << abs(sum) <<endl;
}