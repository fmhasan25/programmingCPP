/* Program money converter Robbins version o */
#include<iostream> //Required for cin, cout, endl.
#include<stdlib.h> //NEW calling on use of toupper() function
/* toupper() converts entered character to capital so switch
*below will work whether you enter for example: an 'E' or 'e‘*/
using namespace std;
/* To get currency dollars to country letters are entered for currency name
* E=> Euros of Italy P => Pesos OF Mexicao S= British pound */
int main()
{
double dollars, equivalentCurr;
char currencyCode;
const double ECONVERSION(0.8795), PCONVERSION(18.95), SCONVERSION(0.6529);
// Prompt and get user input from the keyboard.
cout << "Enter dollar amount to be converted" << endl;
cin >> dollars; // add while (dollars > 0)
//{ //WHILE BLOCK be sure to change indentation
cout << "Enter code for the currency\n" << "E =>for Italian Euros\nP=>Mexican Pesos\nS=British pound sterling\n";
cin >> currencyCode;
switch (toupper(currencyCode))
{
case 'E':
cout << "Converting dollars to Italian Euros..\n"; // cin Dollar
//currencycode ?
equivalentCurr = dollars * ECONVERSION; // while (Dollar > 0
break;
case 'P': //currencycode ?
cout << "Converting dollars to Mexican Pesos..\n";
equivalentCurr = dollars * PCONVERSION;
break;
case 'S': // cin Dollar
cout << "Converting dollars to British pound sterlings..\n";
equivalentCurr = dollars * SCONVERSION;
break;
default:
cout << currencyCode << " not supported this week\n ";
equivalentCurr = dollars;
}//end switch
cout << " Equivalent amount is \n";
cout << equivalentCurr << endl;
//cout << "Enter ANOTHER dollar amount to be converted ( ZERO ENDS LOOP)" << endl;
//cin >> dollars;
// } // end while loop
return (0);
}//endmain