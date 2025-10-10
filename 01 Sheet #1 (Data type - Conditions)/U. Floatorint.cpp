#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float N;
    cin >> N;

    if(N == (int)N){
        cout << "int " << (int)N;
    }else{
        cout << "float " << (int)N << " " << fixed << setprecision(3) << N - ((int)N);
    }
    return 0;
}