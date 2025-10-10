#include <iostream>
using namespace std;

void max_min(int arr[], int s)
{
    int maxi = arr[0], mini = arr[0];
    for (int i = 1; i < s; i++)
    {
        if (arr[i] > maxi)
            maxi = arr[i];

        if (arr[i] < mini)
            mini = arr[i];
    }
    cout << mini << " " << maxi;
}

int main()
{

    int n;
    cin >> n;
    int arr[100000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    max_min(arr, n);
}
