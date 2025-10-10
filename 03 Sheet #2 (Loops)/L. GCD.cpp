#include <iostream>

using namespace std ;

int GCD(int x, int y){
    int a,b,r;

    if(x > y){
        a = x;
        b = y;
    }else{
        a = y;
        b = x;
    }

    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}
int main()
{

    int A,B;
    cin >> A >> B;
    cout << GCD(A,B);


    return 0;
}