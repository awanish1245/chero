#include <iostream>
using namespace std;
bool ispowerof2(int num)
{
    if (!(num & (num - 1)))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    bool ispowerof2(8);
    cout << "is power of 2" << endl;
    return 0;
}