#include <iostream>
using namespace std;

int main()
{
    float power, totalLoad = 0;

    while(totalLoad <= 3000)
    {
        cout << "Enter Appliance Power Rating (W): ";
        cin >> power;

        totalLoad += power;

        if(totalLoad > 3000)
        {
            cout << "Load limit exceeded. Do not add more appliances." << endl;
            cout << "Final Total Load = " << totalLoad << " W" << endl;
            break;
        }
    }

    return 0;
}
