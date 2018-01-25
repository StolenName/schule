#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include "funktionenHBFI2017.h"
 
/*
	TODO:
	Variablen einbinden/-bauen
	//Gro?kleinschreibung ignorieren
	Benutzer Freundlicher

	Done:
	Added Array Sortieren

*/

using namespace std;
/*
double z1,z2,z3,z4;
double zSpeicher(string save,bool mode,double input){//mode:1 = input(unten), mode:0 = output(oben);
	if (save.at(0) == ':')
	{
		if(mode){
			if (save == ":z1"){
				z1 = input;
			}
			else if(save == ":z2"){
				z2 = input;
			}
			else if(save == ":z3"){
				z3 = input;
			}
			else if(save == ":z4"){
				z4 = input;
			}
		}
		else{
			if (save == ":z1"){
				return z1;
			}
			else if(save == ":z2"){
				return z2;
			}
			else if(save == ":z3"){
				return z3;
			}
			else if(save == ":z4"){
				return z4;
			}
		}
	}
	else{
		return input;
	}
	
	
}*/

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
	bool inAuswahl,error;
	
	string Variablen[14] = {"Array Sortieren","Aufprallgesch.","Volumen Quader","Oberflaeche Quader","Volumen Kugel","Oberflaeche Kugel","Volumen Pyramide","Oberflaeche Pyramide","Volumen Zylinder","Oberflaeche Zylinder","Momentanwert zweier sinusspannungen","Dezimal in Binaer","Wert Anuuitaetendarlehens","Nullstellen"};
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


	cout<<"\nListe erneut aufrufen mit: Liste\n";
	for (int i = 0; i < 40; i++){
		cout<<"-";
	}
	cout<<endl;
	do{
		getline(cin,AuswahlVar);
		AuswahlVar = ToLower(AuswahlVar);
	//	cin.get();
		inAuswahl = true;
		if (AuswahlVar == ToLower(Variablen[0])){
		//Array Sortieren
			inAuswahl = false;
			
			//cout<<"FUNCTION_ARRAY-SORTIEREN"<<endl;
			//FUNCTION("FUNCTION_ARRAY-SORTIEREN");
			cout<<"Sortieren eines integer Arrays\n";
			int ArrLenght;
			system("cls");
			cout<<"Eingabe wie lang des Arrays\n";
			do{
				error = false;
				cin>>ArrLenght;
				if(cin.fail()){
					error = true;
					cin.clear();
					cin.ignore();
					cout<<"Ungueltige eingabe!\n";
				}
			}while(error);
			int Array[ArrLenght];
			for (int i = 0; i < ArrLenght; i++){
				system("cls");
				do{
					error = false;
					cout<<"Eingabe Zahl "<<i+1<<endl;
					cin>>Array[i];
					if(cin.fail()){
						error = true;
						cin.clear();
						cin.ignore();
						cout<<"Ungueltige eingabe!\n";
					}
				}while(error);
				
			}
			system("cls");
			cout<<"Unsortiertes Array:\n";
			for (int i = 0; i < ArrLenght; i++){
				cout<<Array[i];
				if (i<ArrLenght-1){
					cout<<",";
				}
			}

			ArraySort(ArrLenght,&Array[0]);
			cout<<"\n\nSortiertes array:\n";
			for (int i = 0; i < ArrLenght; i++)
			{
				cout<<Array[i];
				if (i<ArrLenght-1)
				{
					cout<<",";
				}
			}

		}
			else if (AuswahlVar == ToLower(Variablen[1])){
			//Aufprallgeschwindigkeite
				inAuswahl = false;
				system("cls");
				cout<<"Aufprallgeschwindigkeit nach einem freien Fall\n";
				
					double distance;
					do{
						error = false;
						cout<<"Eingabe Fallhoehe.\n";
						cin>>distance;
						if(cin.fail()){
							error = true;
							cin.clear();
							cin.ignore();
							cout<<"Ungueltige eingabe!\n";
						}
					}while(error);
					freierFall(distance,1);
					
				
			}
				else if (AuswahlVar == ToLower(Variablen[2])){
				//Volumen Quader
					inAuswahl = false;
					//FUNCTION("FUNCTION_VOLUMEN-QUADER");
					int laenge,hoehe,breite,vq;
					system("cls");
					cout<<"Volumen eines Quaders\n";
					cout<<"Eingabe Laenge:\n";
					cin>>laenge;
					cout<<"Eingabe Hoehe:\n";
					cin>>hoehe;
					cout<<"Eingabe Breite:\n";
					cin>>breite;
					vq = VolumenQuader(laenge,hoehe,breite);
					cout<<"Das Volumen eines Quaders mit den Dimensinonen: "<<laenge<<"x"<<hoehe<<"x"<<breite<<" betraegt: "<<vq;
				

				}
					else if (AuswahlVar == ToLower(Variablen[3])){
					//Oberflaeche Quader
						inAuswahl = false;
						FUNCTION("FUNCTION_OBERFLAECHE-QUADER");
					}
						else if (AuswahlVar == ToLower(Variablen[4])){
						//Volumen Kugel
							inAuswahl = false;
							FUNCTION("FUNCTION_VOLUMEN-KUGEL");
						}
							else if (AuswahlVar == ToLower(Variablen[5])){
							//Oberflaeche Kugel
								inAuswahl = false;
								FUNCTION("FUNCTION_OBERFLAECHE-KUGEL");
							}
								else if (AuswahlVar == ToLower(Variablen[6])){
								//Volumen Pyramide
									inAuswahl = false;
									FUNCTION("FUNCTION_VOLUMEN-PYRAMIDE");
								}
									else if (AuswahlVar == ToLower(Variablen[7])){
									//Oberflaeche Pyramide
										inAuswahl = false;
										FUNCTION("FUNCTION_OBERFLAECHE-PYRAMIDE");
									}
										else if (AuswahlVar == ToLower(Variablen[8])){
										//Volumen Zylinder
											inAuswahl = false;
											FUNCTION("FUNCTION_VOLUMEN-ZYLINDER");
										}
											else if (AuswahlVar == ToLower(Variablen[9])){
											//Oberflaeche Zylinder
												inAuswahl = false;
												FUNCTION("FUNCTION_OBERFLAECHE-ZYLINDER");
											}
												else if (AuswahlVar == ToLower(Variablen[10])){
												//Momentanwert zweier sinusspannungen
													inAuswahl = false;
													FUNCTION("FUNCTION_SINUSSPANNUNGEN");
												}
													else if (AuswahlVar == ToLower(Variablen[11])){
													//Dezimal in Binaer
														inAuswahl = false;
														FUNCTION("FUNCTION_DEC-BIN");
													}
														else if (AuswahlVar == ToLower(Variablen[12])){
														//Wert Anuuitaetendarlehens
															inAuswahl = false;
															FUNCTION("FUNCTION_ANUUITAETENDARLEHEN");
														}
															else if (AuswahlVar == ToLower(Variablen[13])){
															//Nullstellen
																inAuswahl = false;
																FUNCTION("FUNCTION_NULLSTELLEN");
															}
																else if (AuswahlVar.empty()){
																//Leere eingabe
																	
																}/*
																	else if (AuswahlVar == "test"){
																		char input1[100],input2[100];
																		char output1[100],output2[100];
																		
																		cin>>input1;
																		string sinput1(input1);
																		//cin>>input2;
																		double summe=zSpeicher(sinput1,false,std::atoi(input1));
																		cout<<summe<<endl;
																		cin>>output1;
																		string soutput1(output1);
																		zSpeicher(soutput1,true,std::atoi(output1));

																		
																	}*/
																		else if (AuswahlVar == "liste"){
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
