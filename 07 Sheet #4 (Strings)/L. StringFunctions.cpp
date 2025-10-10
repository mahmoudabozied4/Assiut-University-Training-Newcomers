#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,t;cin>>n;string s;cin>>t;cin>>s;
    while (t--){
        string str;
        cin>>str;
        if (str=="substr"){
            int bg,en;cin>>bg>>en;
            cout<<s.substr(min(en,bg)-1,abs(en-bg)+1)<<endl;
        }
        if (str=="reverse"){
            int bg,en;cin>>bg>>en;
            reverse(s.begin()+min(bg,en)-1,s.begin()+max(bg,en));
        }
        if (str=="sort"){
            int bg,en;cin>>bg>>en;
            sort(s.begin()+min(bg,en)-1,s.begin()+max(bg,en));
        }
        if (str=="pop_back"){
            s.pop_back();
        }
        if (str=="push_back"){
            char ch;cin>>ch;
            s.push_back(ch);
        }
        if (str=="back"){
            cout<<s.back()<<endl;
        }
        if (str=="print"){
            int i;cin>>i;
            cout<<s[i-1]<<endl;
        }
        if (str=="front"){
            cout<<s.front()<<endl;
        }

    }
}