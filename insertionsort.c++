#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1; // Fix 1: prev should be the index, not the value arr[i-1]

        // Move elements of arr[0..i-1] that are greater than curr
        // to one position ahead of their current position
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev]; // Shift element to the right
            prev--;
        }
        arr[prev + 1] = curr; // Fix 2: Place the curr value in its correct position
    }
    print(arr, n);
}

int main()
{
    int arr[5] = {5, 4, 1, 3, 2};
    insertionsort(arr, 5);
    return 0;
}