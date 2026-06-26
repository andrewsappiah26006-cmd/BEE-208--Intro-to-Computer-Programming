#include <iostream>
using namespace std;

int main()
{
    int choice;
    float voltage, current, power, resistance, time, energy;

    cout << "Calculation Menu\n";
    cout << "1. Calculate DC Power\n";
    cout << "2. Calculate Resistance\n";
    cout << "3. Calculate Energy\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Enter Voltage (V): ";
            cin >> voltage;

            cout << "Enter Current (A): ";
            cin >> current;

            power = voltage * current;

            cout << "Power = " << power << " W";
            break;

        case 2:
            cout << "Enter Voltage (V): ";
            cin >> voltage;

            cout << "Enter Current (A): ";
            cin >> current;

            resistance = voltage / current;

            cout << "Resistance = " << resistance << " Ohms";
            break;

        case 3:
            cout << "Enter Power (W): ";
            cin >> power;

            cout << "Enter Time (h): ";
            cin >> time;

            energy = power * time;

            cout << "Energy = " << energy << " Wh";
            break;

        default:
            cout << "Invalid choice.";
    }

    return 0;
}
