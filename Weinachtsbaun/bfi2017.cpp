//Implementation der Funktion
#include <cstdlib>
#include <iostream>
#include "bfi2017.h"
using namespace std;



void Zeile(char Zeichen,int Zeilen,int Basis){
    string leerstellen = "";
    string zeichenstellen = "";
    
    /* Baum Schatten
    or (int i = 0; i < Zeilen; i++){
    	zeichenstellen += Zeichen;
    }
    */
    //Fehler-----
    for (int p=1;p<Zeilen*2-1;p+=2){
    
    	zeichenstellen += Zeichen;
    }
    for (Zeilen;Zeilen>0;Zeilen--){
    
    	leerstellen += " ";
    }
    
    
    cout<<leerstellen<<zeichenstellen<<endl;

}
