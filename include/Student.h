#ifndef STUDENT_H
#define STUDENT_H

#include "header.h"
#include "Person.h"
#include "schulnetz_user.h"

// Deklaration der Klasse "Student", die öffentlich von den Klassen "Person" und "Schulnetz_user" erbt.
class Student : public Person, public Schulnetz_user
{
    private:
        string fachrichtung; // Ein privates Datenmitglied "fachrichtung" vom Typ "string", das die Fachrichtung des Studenten speichert.
        string gruppe; // Ein privates Datenmitglied "gruppe" vom Typ "string", das die Gruppe des Studenten speichert.

    public:
        // Methoden, die in der Klasse "Student" implementiert werden.

        // Methode zum Setzen der Fachrichtung eines Studenten.
        void setFachrichtung(string fachrichtung);

        // Methode zum Abrufen der Fachrichtung eines Studenten.
        string getFachrichtung();

        // Methode zum Setzen der Gruppe eines Studenten.
        void setGruppe(string gruppe);

        // Methode zum Abrufen der Gruppe eines Studenten.
        string getGruppe();

        // Methode zur Anmeldung eines Studenten.
        void studenten_anmelden();

        // Methode zum Einloggen eines Studenten.
        bool einloggen(string login, string passwort);

        // Methode zur Eingabe von Daten durch einen Studenten.
        bool daten_eingeben();

        // Konstruktor für die Klasse "Student", der die Attribute für den Studenten setzt.
        Student(){}

        // Parameterisierter Konstruktor für die Klasse "Student", der die Attribute für den Studenten basierend auf den übergebenen Werten setzt.
        Student(string anrede, string vorname, string nachname, string alter, string fachrichtung, string login, string passwort)
        {
            this->setAnrede(anrede);
            this->setVorname(vorname);
            this->setAlter(alter);
            this->setNachname(nachname);
            this->setFachrichtung(fachrichtung);
            this->setLogin(login);
            this->setPasswort(passwort);
        }
};

#endif
