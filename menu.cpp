#include "./include/header.h"

// Funktion "menu" zur Anzeige von Menüoptionen basierend auf dem übergebenen Parameter "param".
void menu(int param)
{
    switch (param)
    {
    // Fall 1: Hauptmenü für Studenten.
    case 1:
        cout << "\nWaehlen Sie bitte eine der Optionen aus" << endl;
        cout << "----------------------------------------\n" << endl;
        cout << "1. Als Student anmelden" << endl;
        cout << "2. Als Student einloggen" << endl;
        cout << "3. Als Administrator einloggen" << endl;
        cout << "0. Exit\n" << endl;
        cout << "Eingabe Option: 1, 2, 3, 0\n" << endl;
        break;

    // Fall 2: Untermenü für die Qualifikationsprogramm-Optionen.
    case 2:
        cout << "\n1. Das Qualifikationsprogramm oeffnen" << endl;
        cout << "2. Zurueck zu Hauptmenu\n" << endl;
        cout << "Eingabe Option: 1, 2\n" << endl;
        break;

    // Fall 3: Untermenü für die Listenoptionen.
    case 3:
        cout << "\n1. Die Liste von Studenten oeffnen" << endl;
        cout << "2. Die Liste von Modulen oeffnen" << endl;
        cout << "3. Zurueck zu Hauptmenu\n" << endl;
        cout << "Eingabe Option: 1, 2, 3\n" << endl;
        break;

    // Fall 4: Untermenü für die Studenten-Editieroptionen.
    case 4:
        cout << "\n1. Noch einen Studenten eintragen" << endl;
        cout << "5. Zurueck zu Menu\n" << endl;
        cout << "Eingabe Option: 1, 5\n" << endl;
        break;

    // Fall 7: Auswahlmenü für Fachrichtungen.
    case 5:
        cout << "\nWaehlen Sie bitte eine der Fachinformatik-Richtungen aus :" << endl;
        cout << "----------------------------------------------------------\n" << endl;
        cout << "1. Anwendungsentwicklung" << endl;
        cout << "2. Systemintgration\n" << endl;
        break;
    }
}