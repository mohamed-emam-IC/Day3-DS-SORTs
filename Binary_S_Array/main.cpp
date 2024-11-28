#include <iostream>
using namespace std;

// Function for binary search
int binarySearch(const int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Prevents potential overflow

        if (arr[mid] == target) {
            return mid; // Target found at index mid
        }
        else if (arr[mid] < target) {
            left = mid + 1; // Move to the right half
        }
        else {
            right = mid - 1; // Move to the left half
        }
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the target element to search for: ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "Target element " << target << " found at index: " << result << endl;
    } else {
        cout << "Target element " << target << " not found in the array." << endl;
    }

    return 0;
}
