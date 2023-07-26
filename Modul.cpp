#include "./include/header.h"
#include "./include/Modul.h"


// Methode zum Setzen des Titels eines Moduls.
void Modul::setTitle(string title)
{
    this->title = title;    // Der übergebene Wert "title" wird dem entsprechenden Datenmitglied "title" zugewiesen.
}

// Methode zum Setzen der Dauer eines Moduls.
void Modul::setDauer(string dauer)
{
    this->dauer = dauer;    // Der übergebene Wert "dauer" wird dem entsprechenden Datenmitglied "dauer" zugewiesen.
}

// Methode zum Abrufen des Titels eines Moduls.
string Modul::getTitle()
{
    return title;   // Gibt den Wert des Datenmitglieds "title" zurück, um den Titel des Moduls zu erhalten.
}

// Methode zum Abrufen der Dauer eines Moduls.
string Modul::getDauer()
{
    return dauer;   // Gibt den Wert des Datenmitglieds "dauer" zurück, um die Dauer des Moduls zu erhalten.
}