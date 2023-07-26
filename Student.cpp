#include "./include/header.h"
#include "./include/Student.h"
#include "./include/Administrator.h"
#include <cstring>

// class Student;

void Student::studenten_anmelden()
{
    // Öffnen der Datei "Studenten.txt" im Append-Modus.
    ofstream fout("./daten/Studenten.txt", ios::app);

    if (!fout)
    {
        cout << "Cannot open file.\n"; // Fehlermeldung, falls die Datei nicht geöffnet werden kann.
    }

    // Deklaration und Initialisierung von Variablen zur Erfassung der Studentendaten.
    string anrede;
    string vorname;
    string nachname;
    string alter;
    string fachrichtung;
    string login;
    string passwort;

    int fachrichtungNumber;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorieren aller übrigen Zeichen im Eingabepuffer von "cin" bis zum Zeilenumbruch.

    cout << "Bitte Anrede eingeben:" << endl;
    getline(cin, anrede); // Einlesen der Anrede des Studenten.

    cout << "Bitte Vorname eingeben:" << endl;
    getline(cin, vorname); // Einlesen des Vornamens des Studenten.

    cout << "Bitte Nachname eingeben:" << endl;
    getline(cin, nachname); // Einlesen des Nachnamens des Studenten.

    cout << "Bitte Alter eingeben:" << endl;
    getline(cin, alter); // Einlesen des Alters des Studenten.

    cout << "Bitte Ihren Login-Daten eingeben:" << endl;
    getline(cin, login); // Einlesen des Logins des Studenten.

    cout << "Bitte Ihr Login-Passwort eingeben:" << endl;
    getline(cin, passwort); // Einlesen des Passworts des Studenten.

    menu(5); // Aufruf der Methode "menu" mit dem Parameter 7, um die Fachrichtungsoptionen anzuzeigen.
    cin >> fachrichtungNumber; // Einlesen der Auswahl der Fachrichtung durch den Studenten.

    if (fachrichtungNumber == 1)
    {
        fachrichtung = "Anwendungsentwicklung"; // Zuordnung der Fachrichtung basierend auf der Auswahl des Studenten.
    }
    else if (fachrichtungNumber == 2)
    {
        fachrichtung = "Systemintegration"; // Zuordnung der Fachrichtung basierend auf der Auswahl des Studenten.
    }
    else
    {
        cout << "Falsche Eingabe. Waehlen Sie bitte Option 1 oder 2" << endl; // Fehlermeldung bei ungültiger Auswahl.
    }

    // Erstellung eines Studentenobjekts mit den eingegebenen Daten.
    Student student(ucfirst(anrede), ucfirst(vorname), ucfirst(nachname), alter, fachrichtung, login, passwort);
    Administrator admin;

    // Zuordnung der Gruppe für den Studenten durch den Administrator.
    admin.student_zuordnen(student);

    // Schreiben der Studentendaten in die Datei "Studenten.txt".
    fout << '\n';
    fout << '\t' << student.getAnrede() << '\t' << student.getVorname() << '\t' << student.getNachname() << '\t' << student.getAlter() << '\t' << student.getFachrichtung() << '\t' << student.getLogin() << '\t' << student.getPasswort() << '\t' << student.getGruppe() << '\n';

    cout << "-------------------------------------------" << endl;
    cout << "Erfolgreich" << endl;
    cout << "-------------------------------------------" << endl;

    fout.close(); // Schließen der Datei "Studenten.txt" nach dem Schreiben.
}

bool Student::daten_eingeben()
{
    // Deklaration und Initialisierung der Variablen zur Eingabe des Logins und Passworts des Studenten.
    string login;
    string passwort;

    cout << "Bitte Ihren Login eingeben:" << endl;
    cin >> login; // Einlesen des Logins des Studenten.

    cout << "\nBitte Ihr Passwort eingeben:" << endl;
    cin >> passwort; // Einlesen des Passworts des Studenten.

    return Student::einloggen(login, passwort); // Aufruf der Methode "einloggen" mit den eingegebenen Login- und Passwortdaten.
}

bool Student::einloggen(string param1, string param2)
{
    bool eingeloggt = false;

    ifstream fin("./daten/Studenten.txt", ios::in);
    string anrede{}, vorname{}, nachname{}, alter{}, login{}, passwort{}, richtung{}, gruppe{};

    while (fin >> anrede >> vorname >> nachname >> alter >> richtung >> login >> passwort >> gruppe)
    {
        // Überprüfung, ob die eingegebenen Login- und Passwortdaten mit den Daten in der Datei "Studenten.txt" übereinstimmen.
        if (login == param1 && passwort == param2)
        {   
            cout << "-------------------------------------------" << endl;
            cout << "Sie sind erfolgreich eingeloggt" << endl; // Erfolgsmeldung bei erfolgreicher Anmeldung.
            cout << "-------------------------------------------" << endl;
            
            eingeloggt = true;

            return eingeloggt; // Rückgabe von "true" für erfolgreiche Anmeldung.
        }
    }

    cout << "-------------------------------------------" << endl;
    cout << "Passwort oder Login ist falsch" << endl; // Fehlermeldung bei ungültigen Login- oder Passwortdaten.
    cout << "Falls Sie das Pogramm beenden wollen, druecken Sie bitte die Tastenkombination: [STRG] + [c]" << endl;
    cout << "-------------------------------------------" << endl;

    return eingeloggt;// Rückgabe von "false" für fehlgeschlagene Anmeldung.
}

void Student::setFachrichtung(string fachrichtung)
{
    this->fachrichtung = fachrichtung; // Setzen der Fachrichtung des Studenten.
}

string Student::getFachrichtung()
{
    return fachrichtung; // Abrufen der Fachrichtung des Studenten.
}

void Student::setGruppe(string gruppe)
{
    this->gruppe = gruppe; // Setzen der Gruppe des Studenten.
}

string Student::getGruppe()
{
    return gruppe; // Abrufen der Gruppe des Studenten.
}
