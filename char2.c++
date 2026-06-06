#include <iostream>
#include <cstring> // Necessary header for strlen()
using namespace std;

void reverse(char word[], int n)
{
    int st = 0;
    int end = n - 1;
    while (st < end)
    {
        swap(word[st], word[end]);
        st++;
        end--; // <-- FIXED: Decrement end to move towards the center
    }
}

int main()
{
    char word[] = "code";
    reverse(word, strlen(word));
    cout << "reverse = " << word << endl; // Added " = " for cleaner output formatting
    return 0;
}