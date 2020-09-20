
#include <bits/stdc++.h>
using namespace std;

/*===== TREENODE CODE =====
struct TreeNode {
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode * left, TreeNode * right): val(x), left(left), right(right) {}
};
*/

/* == GRAPH NODE TEMPLATE CODE ===
struct Node {
    int val;
    vector < Node * > neighbors;
    Node(): val(0), neighbors({}) {};
    Node(int x): val(x), neighbors({}) {};
    Node(int x, vector < Node * > neighbors): val(x), neighbors(neighbors) {};
};
*/

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
