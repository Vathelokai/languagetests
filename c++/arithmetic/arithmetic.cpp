
#include <iostream>
#include <stdlib.h>
#include <sstream> 

int main()
{
	using namespace std;	
	int x, y, z;
	string output;
	ostringstream x_convert, y_convert, z_convert; // stream for conversion of numbers to strings

	x = 2;
	y = rand() % 10 + 1; // random number 1 to 10

	x_convert << x;
	y_convert << y;

	z = x * y;
	z_convert << z;

	output = "x = " + x_convert.str() + 
		"\ny = " + y_convert.str() +
		"\nx * y = " + z_convert.str();

	cout << output << endl;

	return 0;
}
