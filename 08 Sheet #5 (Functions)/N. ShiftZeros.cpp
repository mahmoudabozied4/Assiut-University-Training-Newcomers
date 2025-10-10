#include "bits/stdc++.h"
using namespace std;

void answer() {
    int n,y=0; cin >> n;
    int a[n];
    for(int i =0 ; i< n; i ++){
        cin>>a[i];
        if(a[i]==0)  y++ ;
        else cout<<a[i]<<" ";
    }
    while (y--)
    {
        cout<<0 << " ";
    }

}

int main()
{
    answer();
}
