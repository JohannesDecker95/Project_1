#include "mann.h"
#include <fstream>
using namespace std;

extern ofstream datei;

Mann::Mann(string n, int a) : Person(n) {
    age = a;
    datei << "+M." << a << endl;
}
Mann::Mann(const Mann& m2) : Person("Kai") {
    age = m2.age;
    datei << "+MCopy." << age << endl;
}
Mann::~Mann() { datei << "-M." << age << endl; }
void Mann::Print() const {
    Person::Print();
    datei << ":." << age;
}
void Mann::Setze(string a) {
    datei << "Geht nicht\n";
}
ostream& operator<<(ostream& s, const Mann& m) {
    m.Print();
    return s;
}