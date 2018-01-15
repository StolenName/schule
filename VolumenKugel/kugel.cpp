//Volumen Berechnung
#include <cstdlib>
#include <iostream>
#include "hbf2I_2017.h"
#include <math.h>

#define _USE_MATH_DEFINES

using namespace std;


//Berechnung des Volumens der Kugel
double Kugel(int groesse,char typ){
	double volumen;
	int r;
	if(typ == 'd'){
		r = groesse/2;
	}
	else{
		r = groesse;
	}
	volumen = (M_PI*4*pow(r,3))/3;

	return volumen;
}
//Zur abgabe nicht wichtig.
string Typ(char typ){
	string ausgabe;
    if(typ == 'r'){
    	ausgabe = "Radius";
    }else{
    	ausgabe = "Durchmesser";
    }
    return ausgabe;
}
