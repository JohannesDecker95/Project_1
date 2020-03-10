#include "person.h"
#include <fstream>

using namespace std;

extern ofstream datei;

Person::Person(string n) : name(n)
{
    datei << "+P." << name << endl;
}

Person::~Person()
{
    datei << "-P." << name << endl;
}

void Person::Setze(string n) { name = n; }
void Person::Print() 
{
    datei << name;
}

ostream& operator<<(ostream& s, const Person& p)
{
    p.Print();
    return s;
}