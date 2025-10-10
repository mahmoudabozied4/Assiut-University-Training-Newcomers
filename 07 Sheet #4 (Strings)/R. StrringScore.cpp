#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int sum=0;
    int n;cin>>n;
    cin>>s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i]=='V' ){
            sum+=5;
        }
        else if (s[i]=='W'){
            sum+=2;
        }
        else if (s[i]=='X'){
            i++;
            continue;
        }
        else if (s[i]=='Y' and i<s.size()-1){
            i++;
            s+=s[i];
            continue;
        }
        else if (s[i]=='Z' and s[i+1]=='V' and i+1<s.size()){
            sum/=5;
            i++;
            continue;
        }
        else if (s[i]=='Z' and s[i+1]=='W' and i+1<s.size()){
            sum/=2;
            i++;
            continue;
        }
    }
    cout<<sum<<endl;

}