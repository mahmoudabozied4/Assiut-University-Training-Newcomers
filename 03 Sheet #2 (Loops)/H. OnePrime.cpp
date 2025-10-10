#include <iostream>


using namespace std ;


int main()
{

    int X,c=0;
    cin >> X;

    for(int i = 1; i <= X; i++){
        if(X%i == 0){
            c++;
        }
    }
    (c == 2) ? cout << "YES" : cout << "NO";




    return 0;
}