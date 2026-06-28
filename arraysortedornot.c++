#include <iostream>
using namespace std;

bool issorted(int arr[], int n, int i)
{
    // Base case: if we reach the last element, the array is sorted
    if (i == n - 1)
    {
        return true;
    }
    // If the current element is greater than the next, it's unsorted
    if (arr[i] > arr[i + 1])
    {
        return false;
    }
    // Recursive call for the next element
    return issorted(arr, n, i + 1);
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5}; // Sorted
    int arr2[5] = {1, 2, 4, 3, 5}; // Unsorted

    // Pass the actual array variables instead of the number 2
    cout << "Is arr1 sorted? " << (issorted(arr1, 5, 0) ? "Yes" : "No") << endl;
    cout << "Is arr2 sorted? " << (issorted(arr2, 5, 0) ? "Yes" : "No") << endl;

    return 0;
}