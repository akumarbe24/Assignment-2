#include <iostream>
using namespace std;

// Function to find missing number using Binary Search
int findMissingBinarySearch(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        // In a perfect series [1,2,3,...], arr[mid] should be mid+1
        if (arr[mid] == mid + 1) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    // The missing number is at position left (=right)
    return arr[left] - 1;
}

int main() {
    int n;
    cout << "Enter the size of the array (missing one number): ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " sorted elements (from 1 to n+1, with one missing):\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int missing = findMissingBinarySearch(arr, n);
    cout << "Missing number is: " << missing << endl;
    return 0;
}
