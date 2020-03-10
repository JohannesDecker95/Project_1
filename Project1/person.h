#include <iostream>

using namespace std;

class Person {
public:
    Person(string n);
    virtual ~Person();
    void Setze(string n);
    virtual void Print() const;
private:
    string name;
};

//ostream& operator<<(ostream& s, const Person& p);
