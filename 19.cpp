#include <iostream>
using namespace std;

int main() {
    int n;
    double arr[100], key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted floating-point elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key) {
            cout << "Element found at index " << mid;
            return 0;
        }
        else if(key > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Element not found.";
    return 0;
}
