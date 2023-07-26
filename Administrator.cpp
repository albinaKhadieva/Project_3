#include "./include/header.h"
#include "./include/Administrator.h"
#include "./include/Modul.h"


// Ich teste das

// Methode zum Setzen des "rechte"-Datenmembers auf den übergebenen Wert "rechte".
void Administrator::setRechte (bool rechte)
{
    this->rechte = rechte;
}

// Methode zum Abrufen des Werts des "rechte"-Datenmembers.
bool Administrator::getRechte ()
{
    return rechte;
}


// Methode zum Zuordnen eines Studenten zu einer Gruppe.
// Die Funktion nimmt ein Objekt der Klasse "Student" entgegen und ordnet dem Studenten eine Gruppe zu,
// die von seiner Fachrichtung und dem aktuellen Jahr abhängt.
void Administrator::student_zuordnen (Student &student)
{
    // Aktuelle Zeit und Jahr ermitteln.
    time_t jetz = std::time(nullptr);
    tm localTime = *std::localtime(&jetz);

    int jahr = localTime.tm_year % 100; // der Gruppenname besteht aus dem aktuellen Jahr und Buchstaben
    
    // Gruppenname je nach Fachrichtung erstellen und dem Studenten zuordnen.
    if (student.getFachrichtung() == "Anwendungsentwicklung")
    {
        string gruppe = "FA" + to_string(jahr);
        student.setGruppe(gruppe);
    }
    else if (student.getFachrichtung() == "Systemintegration")
    {
        string gruppe = "FS" + to_string(jahr);
        student.setGruppe(gruppe);
    }
    else
    {
        // Wenn die Fachrichtung nicht erkannt wird, wird der Student keiner Gruppe zugewiesen.
        student.setGruppe("---");
    }
}

// Methode zum Zuordnen eines Dozenten zu einem Modul.
void Administrator::dozent_zuordnen(Dozent &dozent, Modul &modul)
{
    // Dem Dozenten das übergebene Modul zuweisen.
    dozent.setModul(modul);
}


// Methode zum Eingeben von Login-Daten und Passwort durch den Administrator.
// Die Funktion gibt true zurück, wenn der Login erfolgreich war, andernfalls false.
bool Administrator::daten_eingeben()
{
    string login;
    string passwort;

    cout << "Bitte Ihren Login eingeben:" << endl;
    cin >> login;

    cout << "\nBitte Ihr Passwort eingeben:" << endl;
    cin >> passwort;

    // Die Funktion "einloggen" aufrufen und den Rückgabewert zurückgeben.
    return Administrator::einloggen(login, passwort);
}


// Methode zum Einloggen des Administrators in das System.
// Die Funktion liest Benutzernamen und Passwörter aus einer Datei "admin_daten.txt".
// Wenn ein gültiger Login erfolgt, wird der "rechte"-Datenmember auf true gesetzt und true zurückgegeben.
// Ansonsten wird "rechte" auf false gesetzt und false zurückgegeben.
bool Administrator::einloggen(string param1, string param2)
{
    string login;
    string passwort;
    rechte = false;

    ifstream fin("./daten/admin_daten.txt", ios::in);

    while (fin >> login >> passwort)
    {
        if (login == param1 && passwort == param2)
        {
            cout << "-------------------------------------------" << endl;
            cout << "Sie sind erfolgreich eingeloggt" << endl; // Erfolgsmeldung bei erfolgreicher Anmeldung.
            cout << "-------------------------------------------" << endl;
            // Wenn Login und Passwort übereinstimmen, setze "rechte" auf true und gebe true zurück.
            rechte = true;

            return rechte;
        }
        else
        {
            // Wenn Login oder Passwort falsch sind, gebe eine Fehlermeldung aus, setze "rechte" auf false und gebe false zurück.
            cout << "---------------------------------------------------------------" << endl;
            cout << "Passwort oder Login ist falsch" << endl;
            cout << "Falls Sie das Pogramm beenden wollen, druecken Sie bitte die Tastenkombination: [STRG] + [c]" << endl;
            cout << "---------------------------------------------------------------" << endl;
            
            return rechte;
        }
    }
    return rechte;
}

