
#include <iostream>
#include <stdlib.h>
#include "extras2.h"

int main()
{
	using namespace std;	

	cout << "main() has started." << endl;
	sayThingsVoid(5);
	cout << "\t\tsayThingsVoid() did not return anything" << endl;
	int x = sayThingsInt(6);
	cout << "\t\tsayThingsInt() returned x = ";
	cout << x << endl;
	string y = sayThingsStdString("word");
	cout << "\t\tsayThingsStdString() returned y = '";
	cout << y;
	cout << "'" << endl;
	cout << "main() is ending." << endl;

	return 0;
}

