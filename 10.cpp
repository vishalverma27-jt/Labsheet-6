#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    int a[10][10], b[10][10], mul[10][10];

    cout << "Enter rows & columns of 1st matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows & columns of 2nd matrix: ";
    cin >> r2 >> c2;

    if(c1 != r2) {
        cout << "Multiplication not possible!";
        return 0;
    }

    cout << "Enter 1st matrix:\n";
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> a[i][j];

    cout << "Enter 2nd matrix:\n";
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> b[i][j];

    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++) {
            mul[i][j] = 0;
            for(int k = 0; k < c1; k++)
                mul[i][j] += a[i][k] * b[k][j];
        }

    cout << "Product matrix:\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++)
            cout << mul[i][j] << " ";
        cout << endl;
    }

    return 0;
}
