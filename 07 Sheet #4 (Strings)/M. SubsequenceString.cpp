#include <bits/stdc++.h>
using namespace std;
int c=0;
int main() {
    string s;cin>>s;
    string str="hello";int c=0,j=0;
    for (int i = 0; i < str.size(); ++i) {
        for (; j < s.size(); ++j) {
            if (s[j]==str[i]){
                c++;j++;
                break;
            }
        }
    }
    if (c==str.size()){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}