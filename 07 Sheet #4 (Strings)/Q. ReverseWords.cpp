#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;int c=0;
    cin>>s;
    do {
        reverse(s.begin(),s.end());
        cout<<s;
        cin>>s;
        if (cin.fail()){
            cout<<endl;
            return 0;
        }
        else cout<<" ";


    }while (1);
}