#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;
            right = mid - 1;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return result;
}

int lastOccurrence(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;
            left = mid + 1;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return result;
}

int countOccurrences(int arr[], int size, int target) {
    int first = firstOccurrence(arr, size, target);
    
    if (first == -1) {
        return 0;
    }

    int last = lastOccurrence(arr, size, target);
    return last - first + 1;
}

int main() {
    int arr[] = {2, 4, 10, 10, 10, 10, 20, 50, 50}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the target value: ";
    cin >> target;

    int occurrences = countOccurrences(arr, size, target);

    if (occurrences > 0) {
        cout << "Number of occurrences of target: " << occurrences << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}
