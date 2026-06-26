#include <iostream>
using namespace std;

int main()
{
    int choice;
    float voltage, current, power, resistance, time, energy;

    do
    {
        cout << "\nElectrical Calculator Menu\n";
        cout << "1. Calculate Power\n";
        cout << "2. Calculate Resistance\n";
        cout << "3. Calculate Energy\n";
        cout << "4. Exit\n";
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
                cout << "Power = " << power << " W" << endl;
                break;

            case 2:
                cout << "Enter Voltage (V): ";
                cin >> voltage;
                cout << "Enter Current (A): ";
                cin >> current;
                resistance = voltage / current;
                cout << "Resistance = " << resistance << " Ohms" << endl;
                break;

            case 3:
                cout << "Enter Power (W): ";
                cin >> power;
                cout << "Enter Time (h): ";
                cin >> time;
                energy = power * time;
                cout << "Energy = " << energy << " Wh" << endl;
                break;

            case 4:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}
