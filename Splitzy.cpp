#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
    int n, z;
    cout << "WELCOME TO SPLITZY\n";
    cout << "Enter the number of people : ";
    Beep(750, 500);
    cin >> n;
    string name[100];

    double spent[100];
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of person " << i + 1 << ": ";
        Beep(750, 300);
        cin >> name[i];
        Beep(750, 300);
        cout << "Amount spent by " << name[i] << ": ";
        Beep(750, 300);
        cin >> spent[i];
        Beep(750, 300);
        total = total + spent[i];
    }
    double share = total / n;
    cout << "total spent is : " << total << endl;
    cout << "Each person share is " << share << endl;
    double net[100];
    for (int i = 0; i < n; i++)
    {
        net[i] = spent[i] - share;
    }
    cout << " Final settelments ---> \n ";
    while (true)
    {
        int giver = -1, taker = -1;
        double maxgive = 0, maxtake = 0;
        for (int i = 0; i < n; i++)
        {
            if (net[i] < maxgive)
            {
                maxgive = net[i];
                giver = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (net[i] > maxtake)
            {
                maxtake = net[i];
                taker = i;
            }
        }
        if (giver == -1 || taker == -1)
        {
            break;
        }
        double transfer = min(maxtake, -maxgive);
        cout << name[giver] << " pays " << name[taker] << " : " << transfer << endl;
        net[giver] += transfer;
        net[taker] -= transfer;
    }
    cout << "all settlements done ";
    Beep(750, 1000);
    cin >> z;
    return 0;
}
