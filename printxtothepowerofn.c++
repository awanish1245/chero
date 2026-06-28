#include <iostream>
#include <vector>
using namespace std;
int pow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    x ^ n / 2;
    int halfpow = pow(n, n / 2);
    int halfpowsquare = halfpow * halfpow;
    if (n % 2 != 0)
    {
        return x * halfpowsquare;
    }
    return halfpowsquare;
}
int main()
{
    cout << pow(2, 5);
    return 0;
}
