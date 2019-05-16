#include <iostream>
#include <vector>	// Bibliothek zur Verwendung von Listen zur c++ Standardbibliothek

using namespace std;


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


	cout << " Letztes Element " << zahlenliste.back() << endl;
	cout << "Pop" << endl;

	zahlenliste.pop_back();
	cout << "Anzahl der Elemete: " << zahlenliste.size() << endl << endl;

	cout << " Letztes Element " << zahlenliste.back() << endl;

	system("pause");
	return 0;
}