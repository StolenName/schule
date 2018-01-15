#include <cstdlib>
#include <iostream>
#include "bfi2017.h"

using namespace std;
char zeichen;
int zeilen;
int main(int argc, char *argv[])
{	
	
	cout<<"Eingabe Zeichen\n";
	cin>>zeichen;
	system("cls");
	cout<<"Eingabe Zeilen\n";
	cin>>zeilen;
	system("cls");
    
	for(int i = 1;i > zeilen; i++){
		Zeile(zeichen,zeilen,Basis);
	}
	Zeile(zeichen,zeilen);
    system("PAUSE");
    return EXIT_SUCCESS;
}
