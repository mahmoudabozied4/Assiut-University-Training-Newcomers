#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); ++i) {
        s[i]=tolower(s[i]);
    }
    cout<<min(count(s.begin(),s.end(),'e'), min(count(s.begin(),s.end(),'g'),min(count(s.begin(),s.end(),'y'), min(count(s.begin(),s.end(),'p'),count(s.begin(),s.end(),'t')))))<<endl;
}