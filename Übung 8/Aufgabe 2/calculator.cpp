# include <iostream>
# include <cmath>
using namespace std ;

int Multiply (int z1,int z2)
{
 int result;
 result = z1 * z2;
 return result;    
}

int Divide (int z1,int z2)
{
int result;
 result = z1 / z2;
 return result;   
}

int Power (int z1,int z2)
{
    int result;
 result = pow (z1,z2);
 return result;   
}

int Add (int z1,int z2)
{
int result;
 result = z1 + z2;
 return result;   
}

int Substract(int z1,int z2)
{
int result;
 result = z1 - z2;
 return result;   
}


int main ()
{
int zahl1;
int zahl2;
char operator1;
int ergebnis;
int (*fp257)(int, int);

cout << "Gib die erste Zahl ein: ";
cin >> zahl1;
    
cout << "Gib die zweite Zahl ein: ";
cin >> zahl2;
    
cout << "Gib den Operator ein: ";
cin  >> operator1;

switch (operator1){
 
case '*':
fp257= &Multiply;
break; 
        
case '/':
fp257 = &Divide;
break;        

case '^':
fp257 = &Power;
break;
                
case '+':
fp257 = &Add;
break;
                
case '-':
fp257 = &Substract;    
break;    

default:
cout << "Ungueltiger Operator" << endl;
return 1;
}      

ergebnis = fp257 (zahl1,zahl2);
cout << zahl1 << " " << operator1 <<" "<< zahl2 << " " << " = "<< ergebnis << "\n" ;
system("PAUSE");
return 0;
}
