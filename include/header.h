#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <limits>
#include <fstream>
#include <ios>
#include <iomanip>
#include <vector>
#include <ctime>
#include <string>


// Verwendung von Standard-Bibliotheks-Elementen.
using std::cout;
using std::cin;
using std::stod;
using std::stoi;
using std::string;
using std::endl;
using std::numeric_limits;
using std::streamsize;
using std::ofstream;
using std::ifstream;
using std::ios;
using std::setw;
using std::left;
using std::ifstream;
using std::vector;
using std::to_string;


// Vorwärtsdeklaration der Klasse "Student".
class Student;

// Deklaration der Funktionen, die in anderen Teilen des Programms implementiert sind.
void menu(int param);       // Funktion zur Anzeige des Menüs basierend auf dem übergebenen Parameter "param".
void show_studenten_liste();        // Funktion zum Anzeigen der Liste der Studenten aus der Datei "Studenten.txt".

string ucfirst(string name);        // Funktion zum Formatieren des ersten Buchstabens eines Wortes als Großbuchstabe.

void show_modulen();// Funktion zum Anzeigen der Liste der Modulen aus der Datei "Modulen.txt".
// Weitere Funktionen oder Klassen könnten ebenfalls hier deklariert werden.

#endif