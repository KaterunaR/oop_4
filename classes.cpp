#include "classes.h"
using namespace std;

void Student::saveToFile(ofstream& file) {
    file << "Name: " << name << endl;
    file << "Age: " << age << " years old" << endl;
}

void Actor::saveToFile(ofstream& file) {
    file << "Name: " << name << endl;
    file << "Age: " << age << " years old" << endl;
    file << "Role: " << role << endl;
}

void KvnParticipant::saveToFile(ofstream& file) {
    file << "Name: " << name << endl;
    file << "Age: " << age << " years old" << endl;
    file << "Number of team: " << teamNumber << endl;
}