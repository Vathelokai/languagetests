
#include <iostream>
#include <stdlib.h>

// predeclare some functions
void sayThingsVoid(int x);
int sayThingsInt(int x);
std::string sayThingsStdString(std::string y);

// use functions in main
int main()
{
	using namespace std;	

	cout << "main() has started." << endl;
	sayThingsVoid(5);
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

// actual function definitions
void sayThingsVoid(int x)
{
	using namespace std;	
	cout << "\tThe sayThingsVoid(x) function is running with x = ";
	cout << x << endl;
	// return nothing!
}

int sayThingsInt(int x)
{
	using namespace std;	
	cout << "\tThe sayThingsInt(x) function is squaring x = ";
	cout << x << endl;
	return x*x;
}

std::string sayThingsStdString(std::string y)
{
	using namespace std;	
	cout << "\tThe sayThingsStdString(y) function is running with input y = '";
	cout << y;
	cout << "'" << endl; 
	std::string x("text");
	return x;
}

