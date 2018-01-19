#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <time.h>
#include "funktionenHBFI2017.h"

/*
	TODO:
	Variablen einbinden/-bauen
	//Gro� kleinschreibung ignorieren
	Benutzer Freundlicher
*/

using namespace std;

string ToLower(string wort){
	transform(wort.begin(), wort.end(), wort.begin(),::tolower);
	return wort;
}

void FUNCTION(string FUNCT){
	string With;
	for (int i = 0; i < 12; i++)
	{
		cout<<"|";
		if (i==0||i==11)
		{
			for (int u = 0; u < FUNCT.length()+2; u++)
			{
				cout<<"-";
			}
		}
		else if (i==1||i==10){
			cout<<" "<<FUNCT<<" ";
		}
        else{
            for (int u = 0; u < FUNCT.length()+2; u++){
	            	/*char c;
					srand( (unsigned int) time(NULL)+i*(u+1));
					c = (rand() % 100) + 'a';
    				cout<<c;*/
    				cout<<" ";
    			}	
        }
		cout<<"|"<<endl;

	}
}

int main(int argc, char *argv[])
{
	string AuswahlVar;
	bool inAuswahl;
	
	string Variablen[14] = {"Array Sortieren","Aufprallgeschwindigkeit","Volumen Quader","Oberflaeche Quader","Volumen Kugel","Oberflaeche Kugel","Volumen Pyramide","Oberflaeche Pyramide","Volumen Zylinder","Oberflaeche Zylinder","Momentanwert zweier sinusspannungen","Dezimal in Binaer","Wert Anuuitaetendarlehens","Nullstellen"};
	string Beschreibung[14] = {
		"Sortieren eines eindimansionalen Arrays",
		"Berechnung der Aufprallgeschwindigkeit nach einem freien Fall",
		"Berechnung des Volumens eines Quaders",
		"Berechnung der Oberflaeche eines Quaders",
		"Berechnung des Volumens eines Kugel",
		"Berechnung der Oberflaeche eines Kugel",
		"Berechnung des Volumens eines Pyramide",
		"Berechnung der Oberflaeche eines Pyramide",
		"Berechnung des Volumens eines Zylinder",
		"Berechnung der Oberflaeche eines Zylinder",
		"Berechnung des Momentanwerts zweier ueberlagerter sinusfoermiger Spannungen",
		"Umrechnung einer Zahl aus dem Dezimal- in das Binaersystem",
		"Berechnung des aktuellen Wertes eines Anuuitaetendarlehens",
		"Bestimmung der Nullstellen eines Polynoms zweiten Grades"
	};
	//Abfrage welches option gewaehlt wird.
	cout<<"Bitte waehlen Sie eine Rechenmethode aus und geben diese ein und mit [EINGABE] bestaetigen\nZur auswahl stehen:\n";

		
	for (int i = 0; i < sizeof(Variablen)/sizeof(Variablen[0]); i++){
		cout<<"- "<<Variablen[i]<<"\n\t"<<"~"<<Beschreibung[i]<<"~"<<endl<<endl;
	}


	cout<<"\nListe erneut aufrufen mit: Liste"<<endl;
	for (int i = 0; i < 40; i++){
		cout<<"-";
	}
	cout<<endl;
	do{
		getline(cin,AuswahlVar);
	//	cin.get();
		inAuswahl = true;
		if (ToLower(AuswahlVar) == ToLower(Variablen[0])){
		//Array Sortieren
			inAuswahl = false;
			//cout<<"FUNCTION_ARRAY-SORTIEREN"<<endl;
			FUNCTION("FUNCTION_ARRAY-SORTIEREN");
		}
			else if (ToLower(AuswahlVar) == ToLower(Variablen[1])){
			//Aufprallgeschwindigkeite
				inAuswahl = false;
				FUNCTION("FUNCTION_AUFPRALLGESCHWINDIGKEIT");
			}
				else if (ToLower(AuswahlVar) == ToLower(Variablen[2])){
				//Volumen Quader
					inAuswahl = false;
					FUNCTION("FUNCTION_VOLUMEN-QUADER");
				}
					else if (ToLower(AuswahlVar) == ToLower(Variablen[3])){
					//Oberflaeche Quader
						inAuswahl = false;
						FUNCTION("FUNCTION_OBERFLAECHE-QUADER");
					}
						else if (ToLower(AuswahlVar) == ToLower(Variablen[4])){
						//Volumen Kugel
							inAuswahl = false;
							FUNCTION("FUNCTION_VOLUMEN-KUGEL");
						}
							else if (ToLower(AuswahlVar) == ToLower(Variablen[5])){
							//Oberflaeche Kugel
								inAuswahl = false;
								FUNCTION("FUNCTION_OBERFLAECHE-KUGEL");
							}
								else if (ToLower(AuswahlVar) == ToLower(Variablen[6])){
								//Volumen Pyramide
									inAuswahl = false;
									FUNCTION("FUNCTION_VOLUMEN-PYRAMIDE");
								}
									else if (ToLower(AuswahlVar) == ToLower(Variablen[7])){
									//Oberflaeche Pyramide
										inAuswahl = false;
										FUNCTION("FUNCTION_OBERFLAECHE-PYRAMIDE");
									}
										else if (ToLower(AuswahlVar) == ToLower(Variablen[8])){
										//Volumen Zylinder
											inAuswahl = false;
											FUNCTION("FUNCTION_VOLUMEN-ZYLINDER");
										}
											else if (ToLower(AuswahlVar) == ToLower(Variablen[9])){
											//Oberflaeche Zylinder
												inAuswahl = false;
												FUNCTION("FUNCTION_OBERFLAECHE-ZYLINDER");
											}
												else if (ToLower(AuswahlVar) == ToLower(Variablen[10])){
												//Momentanwert zweier sinusspannungen
													inAuswahl = false;
													FUNCTION("FUNCTION_SINUSSPANNUNGEN");
												}
													else if (ToLower(AuswahlVar) == ToLower(Variablen[11])){
													//Dezimal in Binaer
														inAuswahl = false;
														FUNCTION("FUNCTION_DEC-BIN");
													}
														else if (ToLower(AuswahlVar) == ToLower(Variablen[12])){
														//Wert Anuuitaetendarlehens
															inAuswahl = false;
															FUNCTION("FUNCTION_ANUUITAETENDARLEHEN");
														}
															else if (ToLower(AuswahlVar) == ToLower(Variablen[13])){
															//Nullstellen
																inAuswahl = false;
																FUNCTION("FUNCTION_NULLSTELLEN");
															}
																else if (AuswahlVar.empty()){
																//Leere eingabe
																	
																}
																	else if (ToLower(AuswahlVar) == "liste"){
																	//Erneut drucken
																		system("cls");
																		for (int i = 0; i < sizeof(Variablen)/sizeof(Variablen[0]); i++){
																			cout<<"- "<<Variablen[i]<<endl;
																		}
																		cout<<"\nListe erneut aufrufen mit: Liste"<<endl;
																		for (int i = 0; i < 40; i++){
																			cout<<"-";
																		}
																		cout<<endl;
																		
																	}
																		else{
																			cout<<AuswahlVar<<" konnte nicht gefunden werden.\n"<<endl;
																		}

	} while (inAuswahl);
	cout<<endl;


    system("pause");
    return EXIT_SUCCESS;
}
