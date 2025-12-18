#include <iostream>
using namespace std;

void swapMaxMin(int arr[], int n) {
    if (n < 2) return;  
    
    int minIndex = 0;
    int maxIndex = 0;
    
    // Find indices of min and max
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    
    // Swap them
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main() {
    int arr[] = {3, 7, 1, 9, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Before swap: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    swapMaxMin(arr, n);
    
    cout << "After swap:  ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}