#ifndef SCHULNETZ_USER_H
#define SCHULNETZ_USER_H
#include "header.h"

// Abstrakte Klasse Schulnetz_user
class Schulnetz_user
{
    private:
        string login; // Variable zur Speicherung des Logins
        string passwort; // Variable zur Speicherung des Passworts

    public:
        virtual bool einloggen(string login, string passwort) = 0; // Virtuelle Methode, muss von abgeleiteten Klassen implementiert werden
        void setLogin(string login); // Setter-Methode, um den Login zu setzen
        void setPasswort(string passwort); // Setter-Methode, um das Passwort zu setzen
        
        string getLogin(); // Getter-Methode, um den Login abzurufen
        string getPasswort(); // Getter-Methode, um das Passwort abzurufen
};

#endif
