
#include <iostream>
#include <stdlib.h>
#include "read.h"
#include "write.h"

int main()
{
	using namespace std;	

	cout << "main() has started.\n" << endl;
	cout << "Give me a number: ";
	int x = readIn();
	cout << "Give me another number: ";
	int y = readIn();
	writeOut(x*y);
	cout << "\nmain() is ending." << endl;

	return 0;
}

