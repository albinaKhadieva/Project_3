// Die folgenden Zeilen sind Header-Guards, um sicherzustellen, dass der Inhalt dieser Datei
// nur einmal in einer Übersetzungseinheit eingefügt wird. Dies verhindert mehrfache Definitionen.
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

// Inkludieren der notwendigen Header-Dateien, um die erforderlichen Klassen zu deklarieren.
// Dies ermöglicht den Zugriff auf die Definitionen von "header.h", "Mitarbeiter.h", "Student.h",
// "schulnetz_user.h", "Dozent.h" und "Modul.h".
#include "header.h"
#include "Mitarbeiter.h"
#include "Student.h"
#include "schulnetz_user.h"
#include "Dozent.h"
#include "Modul.h"


// Deklaration der Klasse "Administrator", die von den Klassen "Mitarbeiter" und "Schulnetz_user" öffentlich erbt.
class Administrator : public Mitarbeiter, public Schulnetz_user
{
    private:
        bool rechte;  // Ein privates Datenmember, das den Zugriff auf Administratorrechte speichert.

    public:
        void setRechte(bool rechte);// Methode zum Setzen des "rechte"-Datenmembers.
        bool getRechte();   // Methode zum Abrufen des Werts des "rechte"-Datenmembers.
        void student_zuordnen(Student &student); // Methode zum Zuordnen eines Studenten zu einem Administrator.
        void dozent_zuordnen(Dozent &dozent, Modul &modul); // Methode zum Zuordnen eines Dozenten zu einem Modul

        // Methode zum Einloggen eines Administrators in das System.
        // Sie erwartet den Benutzernamen (login) und das Passwort (passwort) als Parameter.
        // Gibt true zurück, wenn der Login erfolgreich war, andernfalls false.
        bool einloggen(string login, string passwort);
        bool daten_eingeben();          // Methode zum Eingeben von Daten. Der genaue Zweck ist aus dem Codeausschnitt nicht ersichtlich.

};

// Ende des Header-Guards.
#endif