#include <cstdlib>
#include <iostream>
#include "hbf2I_2017.h"
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{	
	int inputZahl;
	string inputEinheit;
	char inputTyp;
	cout<<"Eingabe der genutzten einheit (zb. cm,m,km)\n";
	cin>>inputEinheit;
	system("cls");
	cout<<"Eingabe Typ\nEingabe: 'd' oder 'r' fuer Duchmesser oder Radius\n";
	cin>>inputTyp;
	system("cls");
	if (inputTyp == 'd'){
		cout<<"Eingabe Durchmesser\nEingabe: Zahl (zb: 10)\n";
		cin>>inputZahl;
		system("cls");
	}else if(inputTyp == 'r'){
		cout<<"Eingabe Radius\nEingabe: Zahl (zb: 10)\n";
		cin>>inputZahl;
		system("cls");
	}else{
		cout<<"Fehlerhafte eingabe\nBeende.";
		system("pause");
		return EXIT_SUCCESS;
	}
	
	cout<<"Volumen der Kugel mit den Parameter: "<<Typ(inputTyp)<<" mit "<<inputZahl<<inputEinheit<<" = "<<Kugel(inputZahl,inputTyp)<<inputEinheit<<"ü"<<endl;


    system("PAUSE");
    return EXIT_SUCCESS;
}
