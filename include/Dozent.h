#ifndef DOZENT_H
#define DOZENT_H

#include "header.h"
#include "Mitarbeiter.h"
#include "Dozent.h"
#include "Modul.h"


// Deklaration der Klasse "Dozent", die öffentlich von der Klasse "Mitarbeiter" erbt.
class Dozent : public Mitarbeiter
{
    private:
        Modul modul;    // Ein privates Datenmitglied "modul" vom Typ "Modul", das das Modul des Dozenten speichert.

    public:
        // Konstruktor für die Klasse "Dozent".
        // Er akzeptiert Parameter für die Anrede, Vorname, Nachname, ein Modulobjekt und den Festangestelltenstatus.
        // Die Parameter werden verwendet, um die entsprechenden Datenmember des Dozenten zu setzen.
        Dozent(string anrede, string vorname, string nachname, Modul &modul, bool festangestellte)
        {
            this->setAnrede(anrede);
            this->setVorname(vorname);
            this->setNachname(nachname);
            this->setModul(modul);
            this->setFestAngestellte(festangestellte);
        }

    
        // Standardkonstruktor für die Klasse "Dozent".
        Dozent(){}
        
        // Destruktor für die Klasse "Dozent".
        ~Dozent(){}

        // Methode zum Setzen des Moduls für den Dozenten.
        void setModul(Modul &modul);
        
        // Methode zum Abrufen des Moduls des Dozenten.
        Modul getModul();
};

#endif