#include <iostream>
using namespace std;

int main() {
    int n, arr[100], key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter number to search: ";
    cin >> key;

    bool found = false;

    for(int i = 0; i < n; i++)
        if(arr[i] == key)
            found = true;

    if(found)
        cout << key << " is present in the array.";
    else
        cout << key << " is NOT present in the array.";

    return 0;
}
