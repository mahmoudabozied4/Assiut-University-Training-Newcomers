#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

void maxi_mini(int arr[], int n)
{
    sort(arr, arr + n);
    cout << "The maximum number : " <<  arr[n - 1] << endl ;
    cout << "The minimum number : " << arr[0] << endl;
}

void primes(int arr[], int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        bool prime = true;
        if (arr[i] == 0 || arr[i] == 1)
            prime = false;
        else
        {
            for (int j = 2; j * j <= arr[i]; j++)
            {
                if (arr[i] % j == 0)
                {
                    prime = false;
                    break;
                }
            }
        }
        if (prime)
            c++;
    }
    cout << "The number of prime numbers : " << c << endl;
}

void palindrome(int arr[], int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        long long  save, digit, rev = 0;
        save = arr[i];
        int x = arr[i];
        if (x < 10)
            c++;
        else
        {
            do
            {
                digit = x % 10;
                rev = (rev * 10) + digit;
                x = x / 10;
            } while (x != 0);
            if (save == rev)
                c++;
        }
    }
    cout << "The number of palindrome numbers : " << c << endl;
}

void divisors (int arr[], int n)
{
    sort(arr, arr + n);
    int maxi = INT_MIN, numOfDiv, save;
    for (int i = 0; i < n; i++)
    {
        numOfDiv = 0;
        // Getting numberf of divisors
        for (int j = 2; j * j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
                numOfDiv++;
        }
        // Getting the number that has the maximum number of divisors
        if (numOfDiv >= maxi)
        {
            maxi = numOfDiv;
            save = arr[i];
        }
    }
    cout << "The number that has the maximum number of divisors : " << save << endl;
}

int main()
{
    int n; cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maxi_mini(arr, n);
    primes(arr, n);
    palindrome(arr, n);
    divisors (arr, n);

}
