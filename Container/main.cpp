#include <iostream>
#include <string>
#include <vector>	// Bibliothek zur Verwendung von Listen zur c++ Standardbibliothek

using namespace std;


class Kunde
{
public:
	string Vorname;
	string Nachname;
};






int main()
{
	cout << "Programm zu Containern " << endl << endl;

	// eine ganze Zahl anlegen
	//int ganzeZahl;

	// ein Array von Zahlen anlegen
	//int zahlenArray[100];


	// eine Vector-Liste für Zahlen (Datentyp in spitzen Klammern angeben)
	vector<int> zahlenliste;

	// Erstellen eines mehr dimensionaen Arrays mit der vector Klasse 
	vector<vector<int>> mehrDimArray;

	
	// Anzahl der Elemente
	cout << "Anzahl der Elemete: " << zahlenliste.size() << endl;


	// drei Zahlen am Ende anfügen

	zahlenliste.push_back(4);
	zahlenliste.push_back(5);
	zahlenliste.push_back(6);


	cout << "Anzahl der Elemete: " << zahlenliste.size() << endl << endl;

	cout << zahlenliste[0] << endl;
	cout << zahlenliste[1] << endl;
	cout << zahlenliste[2] << endl;
	cout << endl;

	cout << zahlenliste.at(0) << endl;
	cout << zahlenliste.at(1) << endl;
	cout << zahlenliste.at(2) << endl;
	cout << endl;

	for (int i = 0; i < zahlenliste.size(); i++)
	{
		cout << zahlenliste[i] << endl;
		cout << zahlenliste.at(i) << endl;
	}


	cout << "Letztes Element " << zahlenliste.back() << endl;
	cout << "Pop" << endl;

	zahlenliste.pop_back();
	cout << "Anzahl der Elemete: " << zahlenliste.size() << endl << endl;

	cout << " Letztes Element " << zahlenliste.back() << endl;


	//-----------------------------------------------------------------------------------------------------------------------------------------------

	cout << "--------------------------------------------" << endl << endl;

	// Liste von Wörtern aka Satz :p
	vector<string> satz;

	satz.push_back("Hallo du da ");
	satz.push_back("Welt ");
	satz.push_back("Wie ");
	satz.push_back("gehts?");

	for (int i = 0; i < satz.size(); i++)
	{
		cout << satz[i];
	}
	cout << endl;



	// bei der Initiasierung köönen die Startwerte gleich angegeben werden
	vector<string> satz2 = { "Hallo ", "Welt" };


	for (int i = 0; i < satz2.size(); i++)
	{
		cout << satz2[i];
	}
	cout << endl;

	


	vector<string> namensListe;

	namensListe.push_back("Alfred");
	namensListe.push_back("Beate");
	namensListe.push_back("Klaus");

	// Eingabe über den Benutzer
	cout << "Bitte geben Sie einen Namen ein: ";

	string benutzerEingabe = "";
	cin >> benutzerEingabe;

	namensListe.push_back(benutzerEingabe);
	

	for (int i = 0; i < namensListe.size(); i++)
	{
		cout << namensListe[i] << endl;
	}
	cout << endl;






	vector<Kunde> kundenliste;
	Kunde kunde1;
	kunde1.Vorname = "Max";
	kunde1.Nachname = "Muster";


	kundenliste.push_back(kunde1);
	
	cout << kundenliste[0].Vorname << " " << kundenliste[0].Nachname << endl;





	system("pause");
	return 0;
}