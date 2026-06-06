#include <iostream>
#include <cstring>
using namespace std;

bool ispalindrome(char str[], int n)
{
    int st = 0, end = n - 1;
    while (st < end)
    {
        if (str[st] != str[end])
        {
            cout << "not valid palindrome" << endl;
            return false; // Immediately exit if a mismatch is found
        }

        // Move pointers closer to the center if characters match
        st++;
        end--;
    }

    // If the loop finishes without returning false, it's a palindrome
    cout << "valid palindrome" << endl;
    return true;
}

int main()
{
    char str[] = "racecar";
    ispalindrome(str, strlen(str));
    return 0;
}