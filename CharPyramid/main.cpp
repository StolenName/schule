#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <time.h>


using namespace std;

char zeichen;
int zeilen,Chance;
string pre,out;
int main(int argc, char *argv[])
{
    cout << "Eingabe Zeichen\n";
    cin >> zeichen;
    system("cls");
    cout << "Eingabe Zeilen\n";
    cin >> zeilen;
    
    system("cls");
    for (int i = 1; i < zeilen+1; i++)
    {   out = "";
        pre = "";
        
        
        
        for (int u = zeilen-i; u > 0; u--)
        {
            pre = pre+" ";
        }
        
        for (int l = 0; l < i*2-1; l++)
        {// l < i*2-1, soll so!
            out = out + zeichen;
        }
        cout<<pre <<out<<endl;
    }
    //St
    for (int i = 0; i < 2; i++)
    { pre = "";
        for (int u = zeilen-1; u > 0; u--)
        {
            pre = pre+" ";
        }
        cout<<pre<<zeichen<<endl;
    }
    


    cin.get();
    cout << "Press the enter key to continue ...";
    cin.get();
    return EXIT_SUCCESS;
}
