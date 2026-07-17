//programm Play again 2.0
//show work with char, while, do
#include <iostream>
using namespace std;
int main()
{
	char again;
		do
		{
			cout << "\none sms";
			cout << "\nDo u wanna walk wiith me (y or n)";
			cin >> again;
		} while (again == 'y');
	cout << "\nOk,GG";
	return 0;
}
