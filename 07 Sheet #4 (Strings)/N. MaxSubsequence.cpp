#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    string s;
    cin>>s;n=1;
    for (int i = 0; i < s.size()-1; ++i) {
        if (s[i]!=s[i+1]){
            n++;
        }
    }
    cout<<n<<endl;
}