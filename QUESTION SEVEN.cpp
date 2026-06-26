#include <iostream>
using namespace std;

int main()
{
    float voltage, total = 0, average;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter voltage reading " << i << " (V): ";
        cin >> voltage;
        total += voltage;
    }

    average = total / 10;

    cout << "Average Voltage = " << average << " V" << endl;

    return 0;
}
