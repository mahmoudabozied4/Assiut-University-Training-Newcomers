#include <bits/stdc++.h>
using namespace std;
#define Zied cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define lli long long int
#define ll long long
int main() {
    Zied
    int a, b, c=0, d=0;
    string s;
    cin >> a >> b >> s;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] == '-' && i == a){
            c++;
        }
        if(s[i] =='-')d++;
    }
    if(c==1&& d==1)cout <<"Yes" <<endl;
    else cout <<"No" <<endl;

}