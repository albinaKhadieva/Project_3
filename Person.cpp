#include "./include/header.h"
#include "./include/Person.h"

// Methode zum Setzen des Vornamens einer Person.
void Person::setVorname(string vorname)
{
    this->vorname = vorname;    // Der übergebene Wert "vorname" wird dem entsprechenden Datenmitglied "vorname" zugewiesen.
}

// Methode zum Setzen der Anrede einer Person.
void Person::setAnrede(string anrede)
{
    this->anrede = anrede;  // Der übergebene Wert "anrede" wird dem entsprechenden Datenmitglied "anrede" zugewiesen.
}

// Methode zum Setzen des Nachnamens einer Person.
void Person::setNachname(string nachname)
{
    this->nachname = nachname;  // Der übergebene Wert "nachname" wird dem entsprechenden Datenmitglied "nachname" zugewiesen.
}

// Methode zum Setzen des Alters einer Person.
void Person::setAlter(string alter)
{
    this->alter = alter; // Der übergebene Wert "alter" wird dem entsprechenden Datenmitglied "alter" zugewiesen.
}

// Methode zum Abrufen des Vornamens einer Person.
string Person::getVorname()
{
    return vorname; // Gibt den Wert des Datenmitglieds "vorname" zurück, um den Vornamen der Person zu erhalten.
}

// Methode zum Abrufen der Anrede einer Person.
string Person::getAnrede()
{
    return anrede; // Gibt den Wert des Datenmitglieds "anrede" zurück, um die Anrede der Person zu erhalten.
}

// Methode zum Abrufen des Nachnamens einer Person.
string Person::getNachname()
{
    return nachname; // Gibt den Wert des Datenmitglieds "nachname" zurück, um den Nachnamen der Person zu erhalten.
}

// Methode zum Abrufen des Alters einer Person.
string Person::getAlter()
{
    return alter; // Gibt den Wert des Datenmitglieds "alter" zurück, um das Alter der Person zu erhalten.
}