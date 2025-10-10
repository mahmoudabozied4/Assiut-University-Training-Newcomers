#include <iostream>
#include <iomanip>
using namespace std;

void Average(double arr[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout  << fixed << setprecision(6) << sum / n;
}

int main()
{
    int n; cin >> n;
    double arr[10000];
    Average(arr, n);

}
