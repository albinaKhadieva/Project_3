#ifndef MODUL_H
#define MODUL_H
#include "header.h"


// Deklaration der Klasse "Modul".
class Modul
{
    private:
        string title;   // Ein privates Datenmitglied "title" vom Typ "string", das den Titel des Moduls speichert.
        string dauer;      // Ein privates Datenmitglied "dauer" vom Typ "int", das die Dauer des Moduls speichert.

    public:
    // Methoden, die in der Klasse "Modul" implementiert werden.

        // Methode zum Setzen des Titels eines Moduls.
        void setTitle(string title);
        
        // Methode zum Setzen der Dauer eines Moduls.
        void setDauer(string dauer);

        // Methode zum Abrufen des Titels eines Moduls.
        string getTitle();

        // Methode zum Abrufen der Dauer eines Moduls.
        string getDauer();
};

#endif