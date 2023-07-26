#include "./include/header.h"
#include "./include/Mitarbeiter.h"


class Mitarbeiter;

// Methode zum Setzen des Beschäftigungsstatus eines Mitarbeiters (festangestellt oder nicht festangestellt).
void Mitarbeiter::setFestAngestellte(bool festangestellte)
{
    this->festangestellte = festangestellte;    // Der übergebene Wert "festangestellte" wird dem entsprechenden Datenmitglied zugewiesen.
}

// Methode zum Überprüfen, ob ein Mitarbeiter fest angestellt ist oder nicht.
bool Mitarbeiter::isFestAngestellte()
{
    return festangestellte; // Gibt den Wert des Datenmitglieds "festangestellte" zurück, um den Beschäftigungsstatus des Mitarbeiters zu ermitteln.
}

// Methode zum Setzen des Gehalts eines Mitarbeiters.
void Mitarbeiter::setGehalt(double gehalt)
{
    this->gehalt;       // Hier sollte es eine Zuweisung geben, z.B.: this->gehalt = gehalt;
}

// Methode zum Abrufen des Gehalts eines Mitarbeiters.
double Mitarbeiter::getGehalt()
{
    return gehalt;      // Gibt den Wert des Datenmitglieds "gehalt" zurück, um das Gehalt des Mitarbeiters zu erhalten.
}