#include <iostream>
using namespace std;

void NewArray(int n)
{
    int arrA[10000], arrB[1000];

    for (int i = 0; i < n; i++)
        cin >> arrA[i];

    for (int i = 0; i < n; i++)
        cin >> arrB[i];

    for (int i = 0; i < n; i++)
        cout << arrB[i] << ' ';

    for (int i = 0; i < n; i++)
        cout << arrA[i] << ' ';

}

int main()
{
    int n; cin >> n;
    NewArray(n);
}
