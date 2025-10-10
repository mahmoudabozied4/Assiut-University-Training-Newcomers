#include <iostream>
#include <string>

using namespace std ;


int main()
{

    string N,P;
    cin >> N;
    int c = 0;
    P = N;
    for(int i = N.size()-1; i >= 0; i--){
        P[c] = N[i];
        c++;
    }
    cout << stoi(P);
    cout << endl;


    (P == N) ? cout << "YES" : cout << "NO";



    return 0;
}