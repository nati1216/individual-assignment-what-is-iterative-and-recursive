#include <iostream>

using namespace std;

int findSmallest(int arr[], int size) {
    int minNumber = arr[0]; // Assume the first element is the smallest

    for (int i = 1; i < size; i++) {
        if (arr[i] < minNumber) {
            minNumber = arr[i]; // Update min if a smaller number is found
        }
    }

    return minNumber;
}

int main() {
    int arr[] = {120, 45, 67, 89, 34, 23, 90, 11}; // Corrected array initialization
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    int smallest = findSmallest(arr, size);

    cout << "The smallest number in the array is: " << smallest << endl;

    return 0;
}