#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{

    char X;
    cin >> X;

    if(isalpha(X) && isupper(X)){
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL";
    }else if (isalpha(X) && islower(X)){
        cout << "ALPHA" << endl;
        cout << "IS SMALL";
    }else{
        cout << "IS DIGIT";
    }
    return 0;
}
