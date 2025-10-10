#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    for(int i =1 ; i <= n ; i++){
        cout<<i;
        //this part to skip the last space after the last number
        if(n==i)
            continue;
        cout<<" ";
    }
}

int main(){
    int num1;
    cin>>num1;
    print(num1);
}

