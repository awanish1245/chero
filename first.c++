#include <iostream>
#include <vector>

using namespace std;

int firstOccur(const vector<int> &vec, int i, int target)
{
    // Base case 1: Target not found
    if (i == vec.size())
    {
        return -1;
    }

    // Base case 2: First match found
    if (vec[i] == target)
    {
        return i;
    }

    // Recursive case
    return firstOccur(vec, i + 1, target);
}

int main()
{
    vector<int> vec = {1, 2, 3, 3, 3, 4};
    cout << firstOccur(vec, 0, 3);
    return 0;
}
