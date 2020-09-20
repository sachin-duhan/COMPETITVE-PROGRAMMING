#include <bits/stdc++.h>
using namespace std;

class Person
{
private:
public:
    string name;
    int age;

    Person() : name(""), age(0){};
    Person(string name, int age) : name(name), age(age){};
    void hello() { cout << this->name << " says hello to the fucking world" << endl; }
};

class Student : public Person
{

public:
    string rollNo;
    string collegeName;
    Student(string name, int age, string rollNo, string collegeName)
        : rollNo(rollNo), collegeName(collegeName)
    {
        this->name = name;
        this->age = age;
    };
    void dance() { cout << this->name << " is a student of " << this->collegeName << "." << endl; }
};

int main()
{
    Person sachin("sachin duhan", 10);
    sachin.hello();
    Student sachin_dtu("sachin duhan", 10, "2k17/Mc/087", "DTU");
    sachin_dtu.dance();
    cout << sachin_dtu.name << " " << sachin_dtu.age << " is a student of " << sachin_dtu.collegeName << " with roll number " << sachin_dtu.rollNo << endl;
    return 0;
}
