#include <iostream>
using namespace std;

int main()
{
    float temperature, total = 0, average;
    int count = 0;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter Temperature " << i << ": ";
        cin >> temperature;

        if(temperature < 0)
        {
            continue;
        }

        total += temperature;
        count++;
    }

    if(count > 0)
    {
        average = total / count;
        cout << "Average Temperature = " << average << " °C" << endl;
    }
    else
    {
        cout << "No valid temperature readings." << endl;
    }

    return 0;
}
