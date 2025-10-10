#include <iostream>
using namespace std;

bool isPrime(int input)
{
    if (input == 0 || input == 1)
        return false;
    for(int i = 2; i * i <= input; i++) { // loop from 2 to Sqrt(n)
        if(input % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int testCases; cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        int input; cin >> input;
        if (isPrime(input))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
