#include <bits/stdc++.h>
using namespace std;
int row, column;
int arr[11][11];
int maxPath(int start, int end) {
    if (start == row - 1 && end == column - 1) {
        return arr[start][end];
    } else if (start == row + 1 || end == column + 1) {
        return -1000000;
    }
    int right = maxPath(start, end + 1);
    int down = maxPath(start + 1, end);
    return arr[start][end] + max(right, down);
}

int main() {
    cin >> row >> column;
    for (int i = 0; i < row; i++) {
        for (int z = 0; z < column; z++) {
            cin >> arr[i][z];
        }
    }
    cout << maxPath(0, 0);
}
