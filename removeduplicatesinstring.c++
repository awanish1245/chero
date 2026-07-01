#include <iostream>
#include <string>
#include <unordered_set>

std::string removeDuplicatesKeepOrder(std::string str)
{
    std::string result = "";
    std::unordered_set<char> seen;

    for (char ch : str)
    {
        // If the character hasn't been seen yet, add it to the result
        if (seen.find(ch) == seen.end())
        {
            seen.insert(ch);
            result += ch;
        }
    }
    return result;
}

int main()
{
    std::string str = "programming";
    std::cout << "Original: " << str << "\n";
    std::cout << "Result:   " << removeDuplicatesKeepOrder(str) << "\n";
    // Output: progamin
    return 0;
}