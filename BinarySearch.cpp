#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        cout << "Active items: ";
        for (int i = left; i <= right; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the target value: ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}
