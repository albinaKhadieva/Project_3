#ifndef MITARBEITER_H
#define MITARBEITER_H

#include "header.h"
#include "Person.h"


// Deklaration der Klasse "Mitarbeiter", die öffentlich von der Klasse "Person" erbt.
class Mitarbeiter : public Person
{
    private:
        double gehalt;      // Ein privates Datenmitglied "gehalt" vom Typ "double", das das Gehalt des Mitarbeiters speichert.
        bool festangestellte; /* Ein privates Datenmitglied "festangestellte" vom Typ "bool", 
                                das den Beschäftigungsstatus des Mitarbeiters speichert 
                                (festangestellt oder nicht festangestellt).*/

    public:
        // Methoden, die in der Klasse "Mitarbeiter" implementiert werden.

        // Methode zum Setzen des Beschäftigungsstatus eines Mitarbeiters (festangestellt oder nicht festangestellt).
        void setFestAngestellte(bool festangestellte);

        // Methode zum Setzen des Gehalts eines Mitarbeiters.
        void setGehalt(double gehalt);
        
        // Methode zum Überprüfen, ob ein Mitarbeiter fest angestellt ist oder nicht.
        bool isFestAngestellte();

        // Methode zum Abrufen des Gehalts eines Mitarbeiters.
        double getGehalt();
};

#endif