# include < iostream >
using std::cout;
using std::endl;

int ivar = 42;

int main() {
	 cout << " ivar = " << ivar << endl;
	
	 int ivar = 17;
	 cout << " ivar = " << ivar << endl;
	 ivar = 33;
	
		 {
		 int ivar = 99;
		 cout << " ivar = " << ivar << endl;
		 ivar = 19;
		 }

	cout << " ivar = " << ivar << endl;

	system(" PAUSE ");
return 0;
}/*Im ersten Schritt wird die Variable ivar Global mit dem Wert 42 initialisiert und später ausgegeben  (Zeile 5 - 8).Nun wird die Varaiable ivar neu definiert, aber als lokale Variable im Level 1 mit dem Wert 17 (Zeile 10) dieser Wert wird in Zeile 11 ausgegeben in der Konsole.Danach wird die lokale Variable im Level 1 mit dem Wert 33 überschrieben (Zeile 12). Nun springt das Programm in das Level 2 welches die Variable ivar dort erneut neu definiert und inititialsiert mit dem Wert 99 (Zeile 15). Dieser Wert wird nun ausgegben in der Konsole (Zeile 16). Nach der Ausgabe wird die Variable im Level 2 mit dem Wert 19 überschrieben (Zeile 17) allerdings nicht erneut ausgeben und kann auch nicht in andern Leveln wiederverwendet werden.Zum Schluss befinden wir uns wieder in dem normalen Main Prozess (Level 1) und dort wird der zuletzt gespeicherte Wert ausgegeben dieser Wert ist dabei 33 (Zeile 20).*/