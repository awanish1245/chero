#include <iostream>
#include <string> // Use <string> for std::string, not <cstring>
using namespace std;

void binstring(int n, int lastplace, string ans)
{
    // Base Case
    if (n == 0)
    {
        cout << ans << endl;
        return;
    }

    // If the last digit was 0, we can append either 0 or 1
    if (lastplace == 0)
    {
        binstring(n - 1, 0, ans + "0");
        binstring(n - 1, 1, ans + "1");
    }
    // If the last digit was 1, we can ONLY append 0 (to avoid consecutive 1s)
    else
    {
        binstring(n - 1, 0, ans + "0");
    }
}

int main()
{
    string ans = "";
    // Start with n = 3, and assume an initial virtual 'lastplace' of 0
    // so the first digit can be either 0 or 1.
    binstring(3, 0, ans);
    return 0;
}