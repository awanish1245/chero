#include <iostream>
using namespace std;

void fastexpo(long long num, int n)
{
    long long ans = 1;
    while (n > 0)
    {
        int lastbit = n & 1;
        if (lastbit)
        {
            ans = ans * num; // Changed 'x' to 'num'
        }
        num = num * num; // Changed 'x' to 'num'
        n = n >> 1;
    }
    cout << ans << endl;
}

int main()
{
    fastexpo(3, 4); // Output will be 81
    return 0;
}