
#include <iostream>
#include <stdlib.h>

int main()
{
	using namespace std;	

	string message = "Type a number: ";
	cout << message;
	
	int x;
	cin >> x; // thing the user typed

	message = "You typed";
	cout << message << endl;
	cout << x << endl;
	cout << "\n\nFin\n\n";


	return 0;
}
