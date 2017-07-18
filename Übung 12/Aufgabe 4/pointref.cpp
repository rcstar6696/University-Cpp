#include <iostream>
using namespace std;

struct datatyp1
{
    int num1;
    int num2;
};

struct datatyp2
{
	float num1;
	float num2;
};

struct datatyp3
{
	double num1;
	double num2;
};

datatyp1 squareMe(int *a, int *b)
{
	(*a) = (*a)*(*a);
	(*b) = (*b)*(*b);
	datatyp1 ergebnis1;
	ergebnis1.num1 = *a;
	ergebnis1.num2 = *b;
	return ergebnis1;
}


datatyp2 halfMe(float *a, float *b)
{
	(*a) = (*a) / 2;
	(*b) = (*b) / 2;

	datatyp2 ergebnis2;
	ergebnis2.num1 = *a;
	ergebnis2.num2 = *b;
	return ergebnis2;
}

datatyp3 negateMe(double *a, double *b)
{
	(*a) = (*a) *(-1);
	(*b) = (*b) *(-1);

	datatyp3 ergebnis3;
	ergebnis3.num1 = *a;
	ergebnis3.num2 = *b;
	return ergebnis3;
}
int main() 
{
	int x1;
	int y1;

	float x2;
	float y2;

	double x3;
	double y3;
	
	cout << "Gib den ersten integer-Wert ein: ";
	cin >> x1;

	cout << "Gib den zweiten integer-Wert ein: ";
	cin >> y1;
	cout << "-------------------------------------------------" << endl;
	squareMe(&x1, &y1);
	cout <<"Das Quadrat der ersten Zahl ist: " << x1 << endl;
	cout << "Das Quadrat der zweiten Zahl ist: " << y1 << "\n"<< endl;


	cout << "Gib den ersten float-Wert ein: ";
	cin >> x2;
	cout << "Gib den zweiten float-Wert ein: ";
	cin >> y2;
	cout << "-------------------------------------------------" << endl;
	halfMe(&x2, &y2);
	cout << "Die Haelfte der ersten Zahl ist: " << x2 << endl;
	cout << "Die Haelfte der zweiten Zahl ist: " << y2 << "\n" << endl;

	cout << "Gib den ersten double-Wert ein: ";
	cin >> x3;
	cout << "Gib den ersten double-Wert ein: ";
	cin >> y3;

	cout << "-------------------------------------------------" << endl;
	negateMe(&x3, &y3);
	cout << "Die erste Zahl negiert  ist: " << x3 << endl;
	cout << "Die zweite Zahl negiert ist: " << y3 << "\n" << endl;
	system("PAUSE");

}