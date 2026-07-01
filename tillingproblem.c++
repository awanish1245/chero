#include <iostream>
using namespace std;
int tillingproblem(int n)
{
    if (n == 0 | n == 1)
    {
        return 1;
    }
    int ans1 = tillingproblem(n - 1);
    int ans2 = tillingproblem(n - 2);
    return ans1 + ans2;
}
int main()
{
    int n = 4;
    cout << tillingproblem(n) << endl;
}