#include <bits/stdc++.h>
using namespace std;
#define Zied cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define lli long long int
#define ll long long

void subArray(int arr[], int n){

    for (int i = 0; i < n; ++i) {

        for (int j = i; j < n ; ++j) {
            int mx = -100000000;
            for (int k = i; k <= j ; ++k) {
                mx = max(mx, arr[k]);
            }
            cout << mx << " ";
        }

    }
    cout <<endl;


}


int main()
{
    Zied
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n+1];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        subArray(arr, n);
    }
}