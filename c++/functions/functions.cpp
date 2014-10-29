
#include <iostream>
#include <stdlib.h>

void sayThingsVoid()
{
	using namespace std;	
	cout << "The sayThingsVoid() function is running." << endl;
	// return nothing!
}

int sayThingsInt()
{
	using namespace std;	
	cout << "The sayThingsInt() function is running." << endl;
	return 99;
}

std::string sayThingsStdString()
{
	using namespace std;	
	cout << "The sayThingsStdString() function is running." << endl;
	std::string x("text");
	return x;
}

int main()
{
	using namespace std;	

	cout << "main() has started." << endl;
	sayThingsVoid();
	int x = sayThingsInt();
	cout << "sayThingsInt() returned x = ";
	cout << x << endl;
	string y = sayThingsStdString();
	cout << "sayThingsStdString() returned y = '";
	cout << y;
	cout << "'" << endl;
	cout << "main() is ending." << endl;

	return 0;
}

