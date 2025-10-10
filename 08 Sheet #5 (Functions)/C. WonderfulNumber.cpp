#include <bits/stdc++.h>
using namespace std;

bool PalindromeBinary(int n)
{
    bool x = true;
    int binaryNum[32],i = 0;

    for(;n > 0;i++) {
        binaryNum[i] = n % 2;
        n /= 2;
    }

    for (int j = i-1,h = 0; j >= 0; j--,h++)
        if(binaryNum[j]!=binaryNum[h])
            x = false ;

    return x;
}

bool odd(int x){
    if(x%2!=0)
        return true;
    else return false ;
}

int main(){
    int num1;
    cin>>num1;
    if(PalindromeBinary(num1)&&odd(num1))
        cout<<"YES" ;
    else
        cout<<"NO";

}


