
#include <iostream>
#include <stdlib.h>

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

