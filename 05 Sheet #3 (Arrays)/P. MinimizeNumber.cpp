#include <bits/stdc++.h>
using namespace std;
#define Zied cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define lli long long int
#define ll long long
int main()
{
    Zied
    int t, g, c =1; cin >> t;
    vector<int > v;
    for (int i = 0; i < t; ++i) {
        cin >> g; v.push_back(g);
    }
    g=0;
    while (c) {
        for (int i = 0; i < v.size(); ++i) {
            if(v[i] %2!=0){
                c=0;
                break;
            }
        }
        if(!c)break;
        else{
            g++;
            for (int i = 0; i < v.size(); ++i) {
                v[i] = v[i]/2;
            }
        }
    }
    cout << g <<endl;

}