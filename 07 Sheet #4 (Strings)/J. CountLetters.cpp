#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;cin>>s;
    char arr[s.size()];
    for (int i = 0; i < s.size(); ++i) {
        arr[i]=s[i];
    }
    sort(arr,arr+(s.size()));
    for (int i = 0; i < s.size(); ++i) {
        if (arr[i]!=arr[i+1]){
            cout<<arr[i]<<" : "<<count(s.begin(),s.end(),arr[i])<<endl;
        }
    }
}