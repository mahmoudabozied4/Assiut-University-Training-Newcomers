#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--){
        string s,s1;cin>>s>>s1;int l;
        for (int i = 0; i < min(s.size(),s1.size()); ++i) {
            cout<<(char)s[i];cout<<(char)s1[i];
            l=i+1;
        }
        if (l==s.size() and l!=s1.size()){
            for (int i = l; i < s1.size(); ++i) {
                cout<<(char)s1[i];
            }
            cout<<endl;
        }
        else if (l==s1.size() and l!=s.size()){
            for (int i = l; i < s.size(); ++i) {
                cout<<(char)s[i];
            }
            cout<<endl;
        }
        else cout<<endl;
    }

}