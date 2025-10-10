#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    string s1;
    cin>>s>>s1;
    cout<<s.size()<<" "<<s1.size()<<endl<<s+s1<<endl;
    char c=s[0];
    s[0]=s1[0];
    s1[0]=c;
    cout<<s<<" "<<s1<<endl;
}