#include <iostream>
using namespace std ;

void matrix(int n, int x, int y)
{
    x-- , y--; // to fit the array's indexes from 0 to n - 1
    int arr[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    // swap row X with row Y.
    for (int i = 0; i < n; i++)
        swap(arr[x][i], arr[y][i]);

    // swap column Y with column X.
    for(int i = 0 ;i < n; i++)
        swap(arr[i][x] , arr[i][y]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}


int main()
{
    int n; cin >> n;
    int x, y;
    cin >> x >> y;
    matrix(n, x, y);

}
