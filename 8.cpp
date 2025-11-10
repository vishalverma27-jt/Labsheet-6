#include <iostream>
using namespace std;

int main() {
    int r, c;
    int a[10][10], b[10][10], sum[10][10];

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter 1st matrix:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> a[i][j];

    cout << "Enter 2nd matrix:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> b[i][j];

    cout << "Sum matrix:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
