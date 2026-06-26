#include <iostream>
using namespace std;

int main()
{
    float GPA;

    cout << "Enter GPA: ";
    cin >> GPA;

    if (GPA >= 3.5)
        cout << "Eligible for engineering scholarship.";
    else
        cout << "Not eligible for engineering scholarship.";

    return 0;
}
