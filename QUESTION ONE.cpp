#include <iostream>
using namespace std;

int main()
{
    float voltage;

    cout << "Enter voltage (V): ";
    cin >> voltage;

    if (voltage < 0)
        cout << "Invalid voltage reading";
    else if (voltage <= 50)
        cout << "Low voltage";
    else if (voltage <= 240)
        cout << "Normal voltage";
    else if (voltage <= 415)
        cout << "High voltage";
    else
        cout << "Dangerous voltage";

    cout << " (" << voltage << " V)" << endl;

    return 0;
}
