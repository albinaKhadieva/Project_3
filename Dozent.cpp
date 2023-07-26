#include "./include/header.h"
#include "./include/Dozent.h"
#include "./include/Modul.h"


// Methode zum Setzen des Moduls für den Dozenten.
void Dozent::setModul(Modul &modul)
{
    this->modul = modul;        // Das übergebene Modul wird dem Dozenten zugewiesen.
}


// Methode zum Abrufen des Moduls des Dozenten.
Modul Dozent::getModul()
{
    return modul;               // Das Modul des Dozenten wird zurückgegeben.
}