#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int arr[3];
    int sub[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sub[0] = arr[0];
    sub[1] = arr[1];
    sub[2] = arr[2];
    sort(arr,arr+3);

    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl << endl;

    cout << sub[0] << endl;
    cout << sub[1] << endl;
    cout << sub[2];


    return 0;
}