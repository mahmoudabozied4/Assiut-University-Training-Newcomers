#include <iostream>

using namespace std ;


int main()
{

    int A,B,c,num = 0;
    cin >> A >> B;

    for(int i = A; i <= B; i++){
        c = i;
        int flag = 1;
        while(c > 0){
            if(c%10 != 4 && c%10 != 7){
                flag = 0;
                break;
            }
            c /= 10;
        }
        if(flag == 0){
            continue;
        }else{
            cout << i << " ";
            num++;
        }
    }
    if(num == 0){
        cout << -1;
    }

    return 0;
}