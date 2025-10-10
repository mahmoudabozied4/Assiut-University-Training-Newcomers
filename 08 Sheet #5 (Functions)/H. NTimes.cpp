#include <iostream>

using namespace std;

void Ntimes(int num, char character)
{
    for (int i = 1; i < num; i++)
        cout << character << " ";

    cout << character << endl;
}
int main()
{

    int t; cin >> t;
    int num;
    char character;
    for (int i = 0; i < t; i++)
    {
        cin >> num >> character;
        Ntimes(num, character);
    }
}
