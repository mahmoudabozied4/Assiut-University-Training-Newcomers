#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long arr[26]={0};
    char s;
    string str="abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < n; ++i) {
        cin>>s;
        for (int j = 0; j < str.size(); ++j) {
            if (s==str[j]){
                arr[j]++;
                break;
            }
        }
    }
    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < arr[i]; ++j) {
            cout<<str[i];
        }
    }

    cout<<endl;
}