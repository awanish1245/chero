#include <iostream>
#include <vector>
using namespace std;

// Iterative Binary Search
int binarySearchIterative(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid; // Found
        else if (arr[mid] < target)
            left = mid + 1; // Search right half
        else
            right = mid - 1; // Search left half
    }
    return -1; // Not found
}

// Recursive Binary Search
int binarySearchRecursive(const vector<int>& arr, int left, int right, int target) {
    if (left > right) return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, right, target);
    else
        return binarySearchRecursive(arr, left, mid - 1, target);
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    int target;

    cout << "Enter number to search: ";
    cin >> target;

    // Iterative
    int resultIter = binarySearchIterative(arr, target);
    if (resultIter != -1)
        cout << "Found at index (iterative): " << resultIter << endl;
    else
        cout << "Not found (iterative)\n";

    // Recursive
    int resultRec = binarySearchRecursive(arr, 0, arr.size() - 1, target);
    if (resultRec != -1)
        cout << "Found at index (recursive): " << resultRec << endl;
    else
        cout << "Not found (recursive)\n";

    return 0;
}
