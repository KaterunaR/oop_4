#include "classes.h"
using namespace std;

void Student::saveToFile(ofstream& file) {
    file << "��'�: " << name << endl;
    file << "³�: " << age << " ����" << endl;
}

void Actor::saveToFile(ofstream& file) {
    file << "��'�: " << name << endl;
    file << "³�: " << age << " ����" << endl;
    file << "����: " << role << endl;
}

void KvnParticipant::saveToFile(ofstream& file) {
    file << "��'�: " << name << endl;
    file << "³�: " << age << " ����" << endl;
    file << "����� �������: " << teamNumber << endl;
}