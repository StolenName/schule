#include <cstdlib>
#include <iostream>

using namespace std;




void Baum(int zeil, char zeic, int sta){
	string pre,zFolge;
	for (int i = 0; i < zeil; ++i)
	{
		pre = "";
		zFolge = "";
		for (int u = zeil-i; u > 0 ; u--)
		{
			pre += " ";
		}
		for (int k = 0; k < i*2-1; k++)
		{
			zFolge += zeic;
		}
		cout<<pre<<zFolge<<endl;
	}
	for (int i = 0; i < 2; i++)
	{
		for (int u = 0; u < 1; u--)
		{
			
		}
	}


}

int main(int argc, char *argv[])
{	
	int zeilen,staengle;
	char zeichen;
	cout << "Zeichen Eingeben\n";
	cin >> zeichen;
	system("cls");
	cout << "Zeilen Eingeben\n";
	cin >> zeilen;
	system("cls");
	cout << "Staengle breite Eingeben\n";
	cin >> staengle;
	system("cls");


	Baum(zeilen,zeichen,staengle);

	cin.get();
    cout << "Press the enter key to continue ...";
    cin.get();
    return EXIT_SUCCESS;
}
