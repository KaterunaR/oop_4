#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Student {
protected:
    string name;
    int age;
public:
    Student(string Name, int Age) : name(Name), age(Age) {}

    virtual void saveToFile(ofstream& file);
    virtual ~Student() {}
};

class Actor : public Student {
private:
    string role;
public:
    Actor(string Name, int Age, string Role) : Student(Name, Age), role(Role) {}

    void saveToFile(ofstream& file) override;
    ~Actor() {}
};

class KvnParticipant : public Student {
private:
    int teamNumber;
public:
    KvnParticipant(string Name, int Age, int TeamNumber) : Student(Name, Age), teamNumber(TeamNumber) {}

    void saveToFile(ofstream& file) override;
    ~KvnParticipant() {}
};
