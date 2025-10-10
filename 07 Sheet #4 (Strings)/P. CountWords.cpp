#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;int c=0;
    map<string,int>mp;
    getline(cin,s);
    for (int i = 0; i < s.size()-1; ++i) {
        if (((((int)s[i]>=65 and (int)s[i]<=90) or ((int)s[i]>=97 and (int)s[i]<=122)) and (s[i+1]==' ' or s[i+1]=='.' or s[i+1]=='?' or s[i+1]=='!' or s[i+1]==',' or i+2==s.size()))){
            c++;
        }
    }
    if (((s[s.size()-1]>=65 and s[s.size()-1]<=90) or (s[s.size()-1]>=97 and s[s.size()-1]<=122)) and (s[s.size()-2]==' ' or s[s.size()-2]=='.' or s[s.size()-2]=='?' or s[s.size()-2]=='!' or s[s.size()-2]==',')){
        c++;
    }
    cout<<c<<endl;
}