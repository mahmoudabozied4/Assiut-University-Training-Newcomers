#include <iostream>
using namespace std;

void distinct(int arr[], int n)
{
    int j, dis = 0;
    for (int i = 0; i < n; i++)
    {
        // checking the number with the previous numbers
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        // i == j ONLY if the number is distinct
        if (i == j)
            dis++;
    }
    cout << dis;
}

int main()
{
    int n; cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    distinct(arr, n);
}
