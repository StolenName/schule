#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include "funktionenHBFI2017.h"

/*
	TODO:
	Variablen einbinden/-bauen
	//Groß kleinschreibung ignorieren
	Benutzer Freundlicher


*/
using namespace std;

string ToLower(string wort){
	transform(wort.begin(), wort.end(), wort.begin(),::tolower);
	return wort;
}

int main(int argc, char *argv[])
{
	string AuswahlVar;
	bool inAuswahl;
	string VariablenL[14];
	string Variablen[14] = {"Array Sotieren","Aufprallgeschwindigkeit","Volumen Quader","Oberflaeche Quader","Volumen Kugel","Oberflaeche Kugel","Volumen Pyramide","Oberflaeche Pyramide","Volumen Zylinder","Oberflaeche Zylinder","Momentanwert zweier sinusspannungen","Dezimal in Binaer","Wert Anuuitaetendarlehens","Nullstellen"};
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
	cout<<"Bitte wählen Sie eine Rechenmethode aus und geben diese ein und mit [EINGABE] bestaetigen\nZur auswahl stehen:\n";

		
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
		//Array Sotieren
			inAuswahl = false;
			cout<<version();
		}
			else if (ToLower(AuswahlVar) == ToLower(Variablen[1])){
			//Aufprallgeschwindigkeit
				inAuswahl = false;
				/* code */
			}
				else if (ToLower(AuswahlVar) == ToLower(Variablen[2])){
				//Volumen Quader
					inAuswahl = false;
					/* code */
				}
					else if (ToLower(AuswahlVar) == ToLower(Variablen[3])){
					//Oberflaeche Quader
						inAuswahl = false;
						/* code */
					}
						else if (ToLower(AuswahlVar) == ToLower(Variablen[4])){
						//Volumen Kugel
							inAuswahl = false;
							/* code */
						}
							else if (ToLower(AuswahlVar) == ToLower(Variablen[5])){
							//Oberflaeche Kugel
								inAuswahl = false;
								/* code */
							}
								else if (ToLower(AuswahlVar) == ToLower(Variablen[6])){
								//Volumen Pyramide
									inAuswahl = false;
									/* code */
								}
									else if (ToLower(AuswahlVar) == ToLower(Variablen[7])){
									//Oberflaeche Pyramide
										inAuswahl = false;
										/* code */
									}
										else if (ToLower(AuswahlVar) == ToLower(Variablen[8])){
										//Volumen Zylinder
											inAuswahl = false;
											/* code */
										}
											else if (ToLower(AuswahlVar) == ToLower(Variablen[9])){
											//Oberflaeche Zylinder
												inAuswahl = false;
												/* code */
											}
												else if (ToLower(AuswahlVar) == ToLower(Variablen[10])){
												//Momentanwert zweier sinusspannungen
													inAuswahl = false;
													/* code */
												}
													else if (ToLower(AuswahlVar) == ToLower(Variablen[11])){
													//Dezimal in Binaer
														inAuswahl = false;
														/* code */
													}
														else if (ToLower(AuswahlVar) == ToLower(Variablen[12])){
														//Wert Anuuitaetendarlehens
															inAuswahl = false;
															/* code */
														}
															else if (ToLower(AuswahlVar) == ToLower(Variablen[13])){
															//Nullstellen
																inAuswahl = false;
																/* code */
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
																			cout<<AuswahlVar<<" konnt nicht gefunden werden.\n"<<endl;
																		}

	} while (inAuswahl);
	cout<<endl;


    system("pause");
    return EXIT_SUCCESS;
}
