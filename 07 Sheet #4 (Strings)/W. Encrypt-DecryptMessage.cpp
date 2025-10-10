#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    string s;
    cin>>s;
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    if (n==1){
        for (int i = 0; i < s.size(); ++i) {
            for (int j = 0; j < original.size(); ++j) {
                if (s[i]==original[j]){
                    s[i]=key[j];
                    break;
                }
            }
        }
    }
    else {
        for (int i = 0; i < s.size(); ++i) {
            for (int j = 0; j < key.size(); ++j) {
                if (s[i]==key[j]){
                    s[i]=original[j];
                    break;
                }
            }
        }
    }
    cout<<s<<endl;
}