//programm DoUWannaWalkWithMe
//show work wiith while
#include <iostream>

using namespace std;

int main()
{
    char again = 'y';

    while (again == 'y')
    {
        cout << "\n** I send you a message **\n";
        cout << "Do you wanna walk with me? (y/n): ";
        cin >> again;
    }

    cout << "\nOkay, im sad...\n";

    return 0;
}
