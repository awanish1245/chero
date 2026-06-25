#include <iostream>
#include <string> // Added for string support

using namespace std;

class student
{
    string name;
    float cgpa;
    void getpercentage()
    {
        cout << (cgpa * 10) << "%" << endl;
    }
};

int main()
{
    student s1;
    cout << sizeof(s1) << endl; // Fixed space error here
    return 0;
}