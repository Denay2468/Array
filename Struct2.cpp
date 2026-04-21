#include <iostream>
using namespace std;

struct Detaillocation
{
    string village;
    string city;
};


struct student
{
    string id;
    string name;
    string location;
    int age;
};

int main()
{
    student s1;

    cout << "Student ID: " << s1.id << endl;
    cin >> s1.id; // Input new ID for the student
    cout << "Student Name: " << s1.name << endl;
    cin >> s1.name; // Input new name for the student
    cout << "Student Location: " << s1.location << endl;
    cin >> s1.location; // Input new location for the student
    cout << "Student Age: " << s1.age << endl;
    cin >> s1.age; // Input new age for the student

    cout << "Updated Student Information:" << endl;
    cout << "Student ID: " << s1.id << endl;
    cout << "Student Name: " << s1.name << endl;
    cout << "Student Location: " << s1.location << endl;
    cout << "Student Age: " << s1.age << endl;


    return 0;
}