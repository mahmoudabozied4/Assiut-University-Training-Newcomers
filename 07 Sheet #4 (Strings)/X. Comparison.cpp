#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    string arr[s.size()-1];
    for (int i = 1; i < s.size(); ++i) {
        string s1=s;
        string str=s1.substr(0,i);
        sort(str.begin(),str.end());
        s1.erase(s1.begin(),s1.begin()+i);
        sort(s1.begin(),s1.end());
        arr[i-1]=(str+s1);
    }
    sort(arr,arr+s.size()-1);
    if (s.size()>1){
        cout<<arr[0]<<endl;
    }
    else
        cout<<s<<endl;
}