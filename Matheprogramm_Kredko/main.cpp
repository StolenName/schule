#include <cstdlib>
#include <iostream>
#include "funktionenHBFI2017.h"


using namespace std;

int main(int argc, char *argv[])
{
	string AuswahlVar;
	string Variablen[7] = {"Array Sotieren","Aufprallgeschwindigkeit"};
	//Abfrage welches option gewaehlt wird.
	cout<<"Bitte waehlen Sie welche rechenmethode Sie benuetzen wollen.\nZur auswahl stehen:\n";
	for (int i = 0; i < 7; i++)
	{
		cout<<"- "<<Variablen[i]<<endl;
	}
	cin>>AuswahlVar;
	switch(AuswahlVar){
		case Variablen[1]:
			Ausgabe=
			break;

		case Variablen[2]:
			Ausgabe=
			break;

		case Variablen[3]:
			Ausgabe=
			break;

		case Variablen[4]:
			Ausgabe=
			break;

		case Variablen[5]:
			Ausgabe=
			break;

		case Variablen[6]:
			Ausgabe=
			break;

		case Variablen[7]:
			Ausgabe=
			break;


	}


    system("pause");
    return EXIT_SUCCESS;
}
