#ifndef PERSON_H
#define PERSON_H

#include "header.h"

// Deklaration der Klasse "Person".
class Person
{
	private:
		string anrede; // Ein privates Datenmitglied "anrede" vom Typ "string", das die Anrede der Person speichert.
		string vorname; // Ein privates Datenmitglied "vorname" vom Typ "string", das den Vornamen der Person speichert.
		string nachname; // Ein privates Datenmitglied "nachname" vom Typ "string", das den Nachnamen der Person speichert.
		string alter; // Ein privates Datenmitglied "alter" vom Typ "string", das das Alter der Person speichert.

	public:
		// Methoden, die in der Klasse "Person" implementiert werden.

		// Methode zum Setzen des Vornamens einer Person.
		void setVorname(string vorname);

		// Methode zum Setzen der Anrede einer Person.
		void setAnrede(string anrede);

		// Methode zum Setzen des Nachnamens einer Person.
		void setNachname(string nachname);

		// Methode zum Setzen des Alters einer Person.
		void setAlter(string alter);

		// Methode zum Abrufen des Vornamens einer Person.
		string getVorname();

		// Methode zum Abrufen der Anrede einer Person.
		string getAnrede();

		// Methode zum Abrufen des Nachnamens einer Person.
		string getNachname();

		// Methode zum Abrufen des Alters einer Person.
		string getAlter();
};

#endif