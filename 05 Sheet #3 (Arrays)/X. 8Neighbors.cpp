#include <iostream>

using namespace std;


int main(){

    int n,m;
    cin >> n >> m;
    string arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        arr[i] = '[' + arr[i] + ']';
    }

    int x,y,flag = 1;
    cin >> x >> y;
    x--;
    if(x == 0){
        for(int i = x; i <= x + 1; i++){
            for(int j = y - 1; j <= y+1; j++){
                if(arr[i][j] == '.' && (i != x || j != y)){
                    flag = 0;
                }
            }
        }
    }else if (x == n - 1){
        for(int i = x - 1; i <= x; i++){
            for(int j = y - 1; j <= y+1; j++){
                if(arr[i][j] == '.' && (i != x || j != y)){
                    flag = 0;
                }
            }
        }
    }else{
        for(int i = x - 1; i <= x + 1; i++){
            for(int j = y - 1; j <= y+1; j++){
                if(arr[i][j] == '.' && (i != x || j != y)){
                    flag = 0;
                }
            }
        }
    }
    if(flag == 1){
        cout << "yes";
    }else{
        cout << "no";
    }

}