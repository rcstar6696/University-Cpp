// Program converts inch to cm
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	const float INTOCM = 2.54; // cm per inch
			float numIn,
			numCm;

	// Request speed from user
	cout << "Enter value in inch "
		<< "to convert to cm: ";

	cin >> numIn;

	// convert inch to cm
	numCm = numIn * INTOCM;

	// Output converted value
	cout << "The speed in cm is " << numCm;
	cout << endl;
	system("PAUSE");
	return 0;
}
