#include <iostream>
using namespace std;

// Function to perform linear search
void linearSearch(const int arr[], int size, int target) {
    int indices[size]; // Fixed-size array to store indices
    int count = 0;     // Counter for number of occurrences

    // Iterate through the array to find all occurrences of the target
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            indices[count++] = i; // Store index and increment count
        }
    }

    // Display results
    if (count > 0) {
        cout << "Target element " << target << " found at indices: ";
        for (int i = 0; i < count; ++i) {
            cout << indices[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Target element " << target << " not found in the array." << endl;
    }
}

int main() {
    const int size = 8;
    int arr[size] = {1, 2, 3, 4, 2, 5, 2, 6};
    int target;

    cout << "Enter the target element to search for: ";
    cin >> target;

    linearSearch(arr, size, target);

    return 0;
}
