#include <iostream>

using namespace std;


int main()

{
	int fibonacci[] = { 1,1,2,3,5,8,13,21,34,55 };
	int lucas[] = { 2,1,3,4,7,11,18 };
	
								   // sizeof(lucas)
	cout << "Laenge des Arrays : " << sizeof(fibonacci) / sizeof(int) << endl;
	system("PAUSE");
	return 0;
}
