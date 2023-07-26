#include "./include/header.h"
#include "./include/schulnetz_user.h"


void Schulnetz_user::setLogin(string login)
{
    this->login = login; // Setzen des Login-Werts für den Schulnetz-Benutzer
}

void Schulnetz_user::setPasswort(string passwort)
{
    this->passwort = passwort; // Setzen des Passwort-Werts für den Schulnetz-Benutzer
};

string Schulnetz_user::getLogin()
{
    return login; // Abrufen des Login-Werts für den Schulnetz-Benutzer
};

string Schulnetz_user::getPasswort()
{
    return passwort; // Abrufen des Passwort-Werts für den Schulnetz-Benutzer
};
