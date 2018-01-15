#include <cstdlib>
#include <iostream>

using namespace std;

string eingMitglied;
string eingAlter;
string eingGsmtPreis;
int intMitglied, intGsmtPreis, intAlter;


int main(int argc, char *argv[])
{
    // Abfrage Mitgliedschaft
    cout << "Haben Sie eine Mitgliedschaft? \n";
    cout << "Eingabe: Ja: 'j' oder Nein: 'n' \n";
    cin >> eingMitglied; 
 
    intMitglied = ( eingMitglied == "j")*4;
    
    cout << endl << endl << endl;
    system("cls");
    // Abfrage Gesamtpreis
    cout << "Gesamtpreis hoeher als $1000? \n";
    cout << "Eingabe: Ja: 'j' oder Nein: 'n' \n";
    cin >> eingGsmtPreis; 
    
    intGsmtPreis = ( eingGsmtPreis == "j")*2;
    
    cout << endl << endl << endl;
    system("cls");
    // Abfrage Alter
    cout << "Aelter als 18 Jahre? \n";
    cout << "Eingabe: Ja: 'j' oder Nein: 'n' \n";
    cin >> eingAlter; 
    
    intAlter = ( eingAlter == "j")*1;
    
    cout << endl << endl << endl;
    system("cls");
    // berechnung des antwort satzes
    int antwort = (intMitglied+intGsmtPreis+intAlter);
    cout << "Sie bekommen, ";
    switch ( antwort )  
      {  
         case 0:  
              cout << "5% Rabatt.";
            break;
         case 1:  
              cout << "Kein Rabatt.";
            break;
         case 2:  
              cout << "20% Rabatt.";
            break;
         case 3:  
              cout << "15% Rabatt. Wir wuerden Ihnen empfehlen sich eine Mitgliedschaft anzuschaffen, um 20% Rabatt zu bekommen.";
            break;
         case 4:  
              cout << "20% Rabatt.";
            break;
         case 5:  
              cout << "20% Rabatt.";
            break;
         case 6:  
              cout << "20% Rabatt.";
            break;
         case 7:  
              cout << "20% Rabatt.";
            break;  
           
           
      }  
    
    cin.get();
    
    
    
    
    cout << endl << "Press the enter key to continue ...";
    cin.get();
    return EXIT_SUCCESS;
}
