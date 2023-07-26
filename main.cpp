#include "./include/header.h"
#include "./include/Student.h"
#include "./include/Administrator.h"


// Die Hauptfunktion des Programms.
int main (int argc, char *argv[])
{
    int input;                  // Variable für Benutzereingabe
    string login;               // Variable für Benutzerlogin
    string passwort;            // Variable für Benutzerpasswort

    
    // Erzeugung von Objekten für die Klassen "Student" und "Administrator".
    Student student;
    Administrator admin;

    // Variable, die den Anmeldestatus speichert (eingeloggt oder nicht).
    bool eingeloggt = false;

    do
    {
        menu(1);                // Aufruf einer Funktion "menu", um das Hauptmenü mit Optionen anzuzeigen.
        cin >> input;           // Benutzereingabe der ausgewählten Option.

        // Switch-Anweisung zur Verarbeitung der ausgewählten Optionen im Hauptmenü.
        switch (input)
        {
        case 1:
            student.studenten_anmelden(); // Methode "studenten_anmelden" wird für das Studentenobjekt aufgerufen, um sich anzumelden.
            break;

        case 2:
            // Schleife, um den Studenten einzuloggen, bis die Anmeldung erfolgreich ist.
            do
            {
                eingeloggt = student.daten_eingeben(); // Methode "daten_eingeben" wird für das Studentenobjekt aufgerufen.
            }
            while (!eingeloggt);

            do
            {
                menu(2); // Aufruf einer Funktion "menu" für das Untermenü mit Studentenoptionen.
                cin >> input;

                switch (input)
                {
                case 1:
                    show_modulen(); // Funktion "show_modulen" wird aufgerufen, um die Liste von Modulen anzuzeigen.
                    break;

                case 2:
                    break;

                default:
                    cout << "-------------------------------------------" << endl;
                    cout << "Falsche Eingabe. Eingabe Optionen 1, 0" << endl;
                    cout << "-------------------------------------------" << endl;
                }
            }
            while (input != 2);
            break;

        case 3:
            // Schleife, um den Administrator einzuloggen, bis die Anmeldung erfolgreich ist.
            do
            {
                admin.daten_eingeben(); // Methode "daten_eingeben" wird für das Administratorobjekt aufgerufen.
            }
            while (admin.getRechte() == false);
            do
            {    
                menu(3);                // Aufruf einer Funktion "menu" für das Untermenü mit Administratoroptionen.
                cin >> input;       // Benutzereingabe der ausgewählten Option im Administrator-Untermenü.

                // Switch-Anweisung zur Verarbeitung der ausgewählten Optionen im Administrator-Untermenü.
                switch (input)
                {
                case 1:
                    show_studenten_liste(); // Funktion "show_studenten_liste" wird aufgerufen, um die Liste der Studenten anzuzeigen.
                    
                    do
                    {
                        menu(4); // Aufruf einer Funktion "menu" für das Untermenü mit Optionen für die Liste von Studenten.
                        cin >> input;
                        switch (input)
                        {
                        case 1:
                            student.studenten_anmelden();  // Methode "studenten_anmelden" wird für das Studentenobjekt aufgerufen, um einen neuen Studenten einzutragen.
                            break;

                        case 5:
                            break;

                        default:
                            cout << "-------------------------------------------" << endl;
                            cout << "Falsche Eingabe. Eingabe Optionen 1, 2, 3, 5" << endl;
                            cout << "-------------------------------------------" << endl;
                        }
                    } while (input != 5);
                    
                    break;

                case 2:
                    show_modulen(); // Funktion "show_modulen" wird aufgerufen, um die Liste der Modulen anzuzeigen.
                    break;

                case 3:
                    break;

                default:
                    cout << "-------------------------------------------" << endl;
                    cout << "Falsche Eingabe. Eingabe Optionen 1, 2, 3" << endl;
                    cout << "-------------------------------------------" << endl;
                }
            }
            while (input != 3);
            break;

        case 0:
            // Beenden des Programms, wenn der Benutzer "0" auswählt.
            cout << "-------------------------------------------" << endl;
            cout << "Auf Wiedersehen!" << endl;
            cout << "-------------------------------------------" << endl;
            break;

        default:
            cout << "-------------------------------------------" << endl;
            cout << "Falsche Eingabe. Eingabe Option 1, 2, 3, 0" << endl;
            cout << "-------------------------------------------" << endl;
        }
    }
    while (input != 0);     // Die Schleife wird wiederholt, solange der Benutzer nicht "0" auswählt.

    return 0;               // Programmende, Rückgabewert 0.
}