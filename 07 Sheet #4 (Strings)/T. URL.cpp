#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int c=0;
    cin>>s;
    string arr[5]={""};
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '=' and c==0){
            i++;
            while (s[i]!='&'&&i<s.size()){
                arr[c]+=s[i];
                i++;
            }
            c++;
        }
        if (s[i]=='=' and c==1){
            i++;
            while (s[i]!='&'&&i<s.size()){
                arr[c]+=s[i];
                i++;
            }
            c++;
        }
        if (s[i]=='=' and c==2){
            i++;
            while (s[i]!='&'&&i<s.size()){
                arr[c]+=s[i];
                i++;
            }
            c++;
        }
        if (s[i]=='=' and c==3){
            i++;
            while (s[i]!='&'&&i<s.size()){
                arr[c]+=s[i];
                i++;
            }
            c++;
        }
        if (s[i]=='=' and c==4){
            i++;
            while (s[i]!='&' and i<s.size()){
                arr[c]+=s[i];
                i++;
            }
            c++;
        }

    }
    cout<<"username: "<<arr[0]<<endl;
    cout<<"pwd: "<<arr[1]<<endl;
    cout<<"profile: "<<arr[2]<<endl;
    cout<<"role: "<<arr[3]<<endl;
    cout<<"key: "<<arr[4]<<endl;


}