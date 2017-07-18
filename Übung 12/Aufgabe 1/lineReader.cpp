#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

vector <string>readLog()
{
	vector<string> entires;
	string readout;
	vector<string> vektorstring;

	ifstream file;
	file.open("daylog.txt",ios::in);

	if (!file.good()) 
		{
			cout << "Fehler beim oeffnen von daylog.txt" << endl;
		}

	while (!file.eof()) 
		{
			getline(file,readout);
			vektorstring.push_back(readout);
		}
	file.close();
	return vektorstring;
}

int printLog(vector <string> entries)
{
	for (auto index:entries)
	{
		cout << index << endl;
	}
return 0;
}


int main ()
{
cout << "Willkommen im Zeilen - Leser " << endl ;
cout << "Hier sind die gelesenen Eintraege: " << endl;
cout << "-----------------------------------" << endl;
vector <string> entries;
entries = readLog();
printLog (entries);
cout << "-----------------------------------" << endl;
system ("PAUSE");
return 0;
}
