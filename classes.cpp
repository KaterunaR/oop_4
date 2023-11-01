#include "classes.h"
using namespace std;

void Student::saveToFile(ofstream& file) {
    file << "Ім'я: " << name << endl;
    file << "Вік: " << age << " років" << endl;
}

void Actor::saveToFile(ofstream& file) {
    file << "Ім'я: " << name << endl;
    file << "Вік: " << age << " років" << endl;
    file << "Роль: " << role << endl;
}

void KvnParticipant::saveToFile(ofstream& file) {
    file << "Ім'я: " << name << endl;
    file << "Вік: " << age << " років" << endl;
    file << "Номер команди: " << teamNumber << endl;
}