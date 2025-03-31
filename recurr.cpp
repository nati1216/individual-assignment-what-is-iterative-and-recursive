#include <iostream>
using namespace std;

int binarySearchRecursive(int arr[], int target, int left, int right) {
    if (left > right) {
        return -1; // Base case: target not found
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid; // Target found
    } else if (arr[mid] < target) {
        return binarySearchRecursive(arr, target, mid + 1, right); // Search the right half
    } else {
        return binarySearchRecursive(arr, target, left, mid - 1); // Search the left half
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = binarySearchRecursive(arr, target, 0, size - 1);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}