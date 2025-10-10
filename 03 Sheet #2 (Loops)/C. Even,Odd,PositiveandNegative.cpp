#include <iostream>


using namespace std ;


int main()
{

    int N,ev=0,odd=0,pos=0,neg=0;
    cin >> N;
    int num;
    for(int i = 0; i < N; i++){
        cin >> num;
        if(num < 0){
            neg++;
        }
        if(num > 0){
            pos++;
        }
        if(num%2==0){
            ev++;
        }else{
            odd++;
        }
    }

    cout << "Even: " << ev << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg;





    return 0;
}