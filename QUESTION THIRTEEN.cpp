#include <iostream>
using namespace std;

int main()
{
    float voltage;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter Battery Voltage " << i << ": ";
        cin >> voltage;

        if(voltage < 10.5)
        {
            cout << "Low battery detected. Test stopped." << endl;
            break;
        }
        else
        {
            cout << "Battery voltage normal." << endl;
        }
    }

    return 0;
}
