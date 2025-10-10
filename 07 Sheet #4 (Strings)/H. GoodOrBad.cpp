#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;int n;cin>>n;
    while (n--){
        cin>>s;bool ch=false;
        for (int i = 0; i < s.size()-2; i++) {
            if (s[i]==s[i+2] and s[i]!=s[i+1]){
                cout<<"Good\n";
                ch= true;
                break;
            }
            else {
                continue;
            }
        }
        if (ch==false){
            cout<<"Bad\n";
        }
    }
}