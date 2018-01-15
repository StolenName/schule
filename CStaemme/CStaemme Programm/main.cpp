#include <cstdlib>
#include <iostream>

using namespace std;

string eingKnelt, eingNopelt, eingManuselt, eingLoepst, aStamm;
int intKnelt, intNopelt, intManuselt, intLoepst;

// Kommentare sind zur wiedererkennung des Programm Schreibers. Unsinnige Kommentare haben ihren sinn.
int main(int argc, char *argv[])
{	

	// Ganz Wichtige fragen
	cout << "Besitzen die Bewohner einen Knelt? \n";
    cout << "Eingabe: Ja: 'j' oder Nein: 'n' \n";
    cin >> eingKnelt;
    
    intKnelt = (eingKnelt == "j")*8;

    cout << endl << endl << endl;
    system("cls");

    cout << "Nopeln die Bewohner? \n";
    cout << "Eingabe: Ja: 'j' oder Nein: 'n' \n";
    cin >> eingNopelt;

    intNopelt = (eingNopelt == "j")*4; 

    cout << endl << endl << endl;
    system("cls");
    
    cout << "Manuseln die Bewohner? \n";
    cout << "Eingabe: Ja: 'j' oder Nein: 'n' \n";
    cin >> eingManuselt;

    intManuselt = (eingManuselt == "j")*2;
    
    cout << endl << endl << endl;
    system("cls");
    
    cout << "Loepsen die Bewohner? \n";
    cout << "Eingabe: Ja: 'j' oder Nein: 'n' \n";
    cin >> eingLoepst;

    intLoepst = (eingLoepst == "j")*1; 
    
    cout << endl << endl << endl;
    system("cls");
    cin.get();
    
    int antwort = (intKnelt+intNopelt+intManuselt+intLoepst);
    // Lange Switch-Case Analyse, weil If wäre zu einfach.
    switch ( antwort ){
        case 0:
        case 3:
        case 8:
        case 9:
            aStamm = "Cedi";
            break;
        
        case 1:
        case 2:
        case 12:
        case 13:
            aStamm = "Drudi";
            break;
            
        case 4:
        case 5:
        case 6:
        case 7:
            aStamm = "Bela";
            break;
        
        case 10:
        case 11:
        case 14:
        case 15:
            aStamm = "Assis";
            break;
    }
    

    // Ausgabe der Sehr Wichtigen Analyse
    system("cls");
    
    cout << "Laut den angegeben beschreibungen handelt es sich um den " << aStamm << " Stamm.";
    
    cout << endl << endl << "Press the enter key to continue ...";
    cin.get();
    return EXIT_SUCCESS;
}
