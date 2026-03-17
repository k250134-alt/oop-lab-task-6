#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n = "", int a = 0) {
        name = n;
        age = a;
    }

    void showPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    int studentID;
    int gradeLevel;

public:
    Student(string n, int a, int id, int g) : Person(n, a) {
        studentID = id;
        gradeLevel = g;
    }

    void showStudent() {
        showPerson();
        cout << "Student ID: " << studentID << endl;
        cout << "Grade Level: " << gradeLevel << endl;
    }
};

class Teacher : public Person {
protected:
    string subject;
    int roomNumber;

public:
    Teacher(string n, int a, string sub, int room) : Person(n, a) {
        subject = sub;
        roomNumber = room;
    }

    void showTeacher() {
        showPerson();
        cout << "Subject: " << subject << endl;
        cout << "Room Number: " << roomNumber << endl;
    }
};

class GraduateStudent : public Student, public Teacher {
public:
    GraduateStudent(string n, int a, int id, int g, string sub, int room)
        : Student(n, a, id, g), Teacher(n, a, sub, room) {}

    void display() {
        cout << "Graduate Student Details:\n";
        Student::showStudent();
        cout << "Subject: " << subject << endl;
        cout << "Room Number: " << roomNumber << endl;
    }
};

int main() {
    GraduateStudent g("Ali", 24, 101, 4, "OOP", 12);
    g.display();
    return 0;
}
