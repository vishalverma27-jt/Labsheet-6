#include <iostream>
using namespace std;

int main() {
    int n, arr[100];

    cout << "Enter number of elements (sorted array): ";
    cin >> n;

    cout << "Enter sorted elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int low = 0, high = n - 1;

    while(low < high) {
        int mid = (low + high) / 2;

        // Move to the right half because array is increasing
        if(arr[mid] < arr[mid + 1])
            low = mid + 1;
        else
            high = mid;
    }

    cout << "Largest element = " << arr[low];
    return 0;
}
