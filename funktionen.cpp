#include "./include/header.h"
#include "./include/Student.h"
#include "./include/Administrator.h"


// Funktion zum Anzeigen der Liste der Studenten aus der Datei "Studenten.txt".
void show_studenten_liste()
{
    ifstream fin("./daten/Studenten.txt", ios::in);

    if (fin.is_open())
    {
        // Initialisierung von Variablen, um die Daten für jeden Studenten aus der Datei zu speichern.
        string anrede{}, vorname{}, nachname{}, alter{}, login{}, passwort{}, richtung{}, gruppe{};

        // Ausgabe der Spaltenüberschriften für die Studentendaten.
        cout << setw(10) << left << "Anrede" << setw(15) << "Vorname" << setw(15) << "Nachname" << setw(10) << "Alter" << setw(15) <<  "Login" << setw(10) << "Passwort" << setw(15) << "Gruppe" << setw(15) << "Fachrichtung" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        
        vector<Student> studenten;  // Ein Vektor, um die Studentenobjekte zu speichern.

        // Schleife, um die Daten für jeden Studenten aus der Datei einzulesen und in den Vektor zu speichern.
        while (fin >> anrede >> vorname >> nachname >> alter >> richtung >> login >> passwort >> gruppe)
        {
            // gibt die Daten tabellarisch formatiert aus (benutzt Manipulators)
            Administrator admin;
            Student student(anrede, vorname, nachname, alter, richtung, login, passwort);
            
            admin.student_zuordnen(student);    // Methode zum Zuordnen des Studenten zu einer Gruppe wird aufgerufen.
            studenten.push_back(student);       // Der Student wird dem Vektor hinzugefügt.
            //
        }

        // Sortieren der Studenten nach Vorname in aufsteigender Reihenfolge.
        for (int i = 0; i < studenten.size(); i++)
        {
            for (int j = i + 1; j < studenten.size(); j++)
            {
                if (studenten[i].getVorname() > studenten[j].getVorname())
                {
                    Student a = studenten[i];
                    studenten[i] = studenten[j];
                    studenten[j] = a;
                }
            }
        }

        // Ausgabe der Studentendaten in tabellarischer Form.
        for(int i = 0; i < studenten.size(); i++)
        {
            cout << setw(10) << left << studenten[i].getAnrede() << setw(15) << studenten[i].getVorname() << setw(15) << studenten[i].getNachname() << setw(10) << studenten[i].getAlter() << setw(15) << studenten[i].getLogin() << setw(10) << "****" << setw(15) << studenten[i].getGruppe() << setw(15) << studenten[i].getFachrichtung() << endl;
            cout <<"----------------------------------------------------------------------------------------------------------------" << endl;
        }
        
        cout << endl;
    }
    else
    {
        cout << "Error opening file" << endl;   // Fehlermeldung, falls die Datei nicht geöffnet werden kann.
    }

    fin.close();        // Datei schließen, nachdem sie gelesen wurde.
}

void show_modulen()
{
    ifstream fin("./daten/Modulen.txt", ios::in);  // hier wird den Ihnahlt der Datei ausgelesen 

    char c;

    if (fin.is_open())      // Ueberprueft, ob die Datei verfuegbar ist
    {
        string text;
        char c;
        c = fin.get();

        while (fin.good())  // Die Bedienung des Streams wird ueberprueft
        {
            text += c;
            c = fin.get();
        }
        vector<string> zeilen;

        string::size_type startPos = 0;
        string::size_type endPos = 0;

        // Mithilfe der Find werden die Zeilenumbrueche gefunden und danach dir Dateien ausgelesen
        while ((endPos = text.find('\n', startPos)) != std::string::npos) // bis zum Ende des Strings
        {
            string line = text.substr(startPos, endPos - startPos); // die Zeilen werden als subString in einem String gespeichert
            zeilen.push_back(line);
            startPos = endPos + 1;
        }
        string lastLine = text.substr(startPos);

        zeilen.push_back(lastLine);            // hier werden die gespricerten Zeilen am Ende des Vectors gespeichert 
        
        vector<Modul>modulen;

        for (int i = 0; i < zeilen.size() - 1; i = i + 2)
        {
            Modul modul;

            for(int j = 1; j < zeilen.size(); j = j + 2){
                modul.setTitle(zeilen[i]);
                modul.setDauer(zeilen[j]);
            }

            modulen.push_back(modul);
        }
        // Ausgabe der Liste von Modulen in tabellarischer Form.
        cout << endl;
        cout << setw(105) << left << "Baustein" << setw(15) <<  "Dauer (Tage)" << setw(10) << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        
        for (int i = 0; i < modulen.size(); i++)
        {
            cout << setw(105) << left << modulen[i].getTitle() << setw(15) << modulen[i].getDauer() << setw(10) << endl;
            cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
        }
    }
    else
    {
        cout << "Keine Modulen vorhanden" << endl;
    }

    fin.close();
}

// Funktion zum Formatieren des ersten Buchstabens eines Wortes als Großbuchstabe.
string ucfirst(string name) // Funktion nimmt ein Wort als Parameter ein und korrigiert die Groesse der Buchstaben
{
    for (int i = 0; i < name.length(); i++) // macht alle Buchstaben klein
    {
        if (name[i] <= 90 && name[i] >= 65)
        {
            name[i] = name[i] + 32;         // Macht alle Buchstaben klein.
        }
    }

    name[0] = name[0] - 32; // macht die erste Buchstabe gross

    return name;
}