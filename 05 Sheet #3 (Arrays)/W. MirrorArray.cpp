#include <bits/stdc++.h>
using namespace std;


int main(){
    int row,col ;cin>>row>>col;
    int** a = new int*[row];
    for(int i = 0; i < row; i++)
        a[i] = new int[col];

    for(int i =0 ; i<row ;i++)
        for(int j =0 ; j<col ; j++)
            cin>>a[i][j];

    for(int i = 0 ; i<row ; i++){
        for(int j = col-1 ; j>=0 ; j--)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}