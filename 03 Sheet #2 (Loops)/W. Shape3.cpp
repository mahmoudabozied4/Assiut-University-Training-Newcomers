#include <iostream>
#include <algorithm>

using namespace std ;


int main()
{

    int N;
    cin >> N;
    int c = 1;
    for(int i = N-1; i >= 0; i--){
        for(int j = i; j > 0; j--){
            cout << ' ';
        }
        for(int j = 0; j < c; j++){
            cout << '*';
        }
        c += 2;
        cout << endl;
    }
    c -= 3;
    for(int i = 0; i < N; i++){
        for(int j = i; j > 0; j--){
            cout << ' ';
        }
        for(int j = c; j >= 0; j--){
            cout << '*';
        }
        c -= 2;
        cout << endl;
    }


    return 0;
}