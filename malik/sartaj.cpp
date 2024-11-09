#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n <= 0) {
        cout << "Array is empty." << endl;
        return 0;
    }

    
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    
    n--;

    
    cout << "Updated Array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
