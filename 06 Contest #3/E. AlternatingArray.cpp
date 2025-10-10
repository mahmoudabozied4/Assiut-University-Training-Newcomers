#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double

void solve() {
    int size;
    cin >> size;
    vector<int> arr (size) , arr2 (size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    int count1 = 0, count2 = 1;
    int temp1, temp2;
    arr2[0] *= -1;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            temp1 = arr[i];
            temp2 = arr2[i];
        }
        else
        {
            if ((temp1 > 0 && arr[i] > 0) || (temp1 < 0 && arr[i] < 0))
            {
                count1++;
                arr[i] *= -1;
            }
            if ((temp2 > 0 && arr2[i] > 0) || (temp2 < 0 && arr2[i] < 0))
            {
                count2++;
                arr2[i] *= -1;
            }
            temp1 = arr[i];
            temp2 = arr2[i];
        }
    }

    if (count1 < count2)
        cout << count1;
    else
        cout << count2;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ;
    //    cin >> tc ;
    for(int i = 1 ; i <= tc ; i++)
    {
        solve();
    }
    return (0 - 0);

}
