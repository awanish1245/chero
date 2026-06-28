#include <iostream>
using namespace std;
void fun()
{
    cout << "function call\n";
    fun();
}
int main()
{
    fun();
}
