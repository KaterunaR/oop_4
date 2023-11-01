#include <iostream>
#include <fstream>
#include "classes.h"
using namespace std;

int main() {
    Student student("Ivan", 20);
    Actor actor("Petro", 25, "Main role");
    KvnParticipant participant("Maria", 22, 3);

    ofstream file("info.txt");
    if (file.is_open()) {
        student.saveToFile(file);
        file << "-----------------------" << endl;
        actor.saveToFile(file);
        file << "-----------------------" << endl;
        participant.saveToFile(file);
        file.close();
        cout << "Information is added to 'info.txt'." << endl;
    }
    else {
        cout << "ERROR" << endl;
    }

    return 0;
}