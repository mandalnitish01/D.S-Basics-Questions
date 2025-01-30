#include <iostream>
using namespace std;

// Function to remove duplicates from an array
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;
    
    int temp[n]; // Temporary array to store unique elements
    int j = 0;
    
    // Traverse the array and store only unique elements
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n - 1];
    
    // Copy unique elements back to original array
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }
    
    return j; // Return new size of the array
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements of the array (sorted order preferred): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Remove duplicates
    int newSize = removeDuplicates(arr, n);
    
    // Print the modified array
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
