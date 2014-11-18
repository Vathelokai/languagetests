
#include <iostream>
#include <stdlib.h>
#include <bitset>

// predeclare some functions
std::string getDirection();
int getSize();
int shiftIt(int x, std::string dir, int gap);

// use functions in main
int main()
{
	using namespace std;	
	srand(time(NULL));

	cout << "main() has started." << endl;
	cout << "\tHere is your random int:" << endl;
	int x = rand() % 255; // 0-255
	std::bitset<16> b (x);
	cout << "\t" << x << endl;
	cout << "\t" << b << endl;
	std::string shiftDir;
	shiftDir = getDirection();
	int shiftSize = getSize();
	std::string wePlural;
	if(shiftSize == 1){wePlural = "";}else{wePlural = "s";}
	cout << "\tYou picked " << shiftDir << " by " << shiftSize << " bit" << wePlural << "." << endl;
	x = shiftIt(x, shiftDir, shiftSize);
	b = std::bitset<16>(x);
	cout << "\tAfter shift, your number is" << endl;
	cout << "\t" << x << endl;
	cout << "\t" << b << endl;
	cout << "main() is done." << endl;
	return 0;
}

// actual function definitions
std::string getDirection()
{
	using namespace std;	
	std::string x;
	std::string validR;
	validR = "r";
	std::string validL;
	validL = "l";
	bool valid = false;

	while (!valid)
	{
		valid = true;
		cout << "\tWhich direction do you want to shift (l/r)? ";
		cin >> x;
		if (
			(cin.fail())
			||
			( (x != "r") &&  (x != "l") )
		   )
		{
			cin.clear();
			cin.ignore();
			cout << "Please pick 'l' or 'r'." << endl;
			valid = false;
		}

	}
	if(x == "r")
	{
		x = "right";
	}
	else
	{
		x = "left";
	}

	return x;
}


int getSize()
{
	using namespace std;	
	int x;
	bool valid = false;

	while (!valid)
	{
		valid = true;
		cout << "\tHow far do you want to shift (1-9)? ";
		cin >> x;
		if ( cin.fail() || x > 9 || x < 1 )
		{
			cin.clear();
			cin.ignore();
			cout << "Please pick a single digit number." << endl;
			valid = false;
		}

	}

	return x;
}

int shiftIt(int x, std::string dir, int gap)
{
	using namespace std;	
	cout << "\t\tin:  " << x << endl;
	if (dir == "right")
	{ x = x >> gap; }
	else { x = x << gap; }
	cout << "\t\tout: " << x << endl;
	


	return x;
}



