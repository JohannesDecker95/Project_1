#include "Person.h"
#include <iostream>
using namespace std;

class Mann : public Person {
    int age;

public:
    Mann(string n, int w);
    virtual ~Mann();
    Mann(const Mann& m2);
    void Setze(string w);
    virtual void Print() const;
};

ostream& operator<<(ostream& s, const Mann& m);
