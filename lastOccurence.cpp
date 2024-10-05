#include <iostream>
using namespace std;

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

int main() {
    int arr[] = {2, 4, 10, 10, 10, 30, 30, 30, 50}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the target value: ";
    cin >> target;

    int result = lastOccurrence(arr, size, target);

    if (result != -1) {
        cout << "Last occurrence of target is at index: " << result << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}
