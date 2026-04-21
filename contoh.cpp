#include <iostream>
#include <string>
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
    Detaillocation location;
    int age;

};

int main()
{
    student s1[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Student ID: ";
        getline(cin, s1[i].id);
        cout << "Student Name: ";
        getline(cin, s1[i].name);
        cout << "Student Location:\n";
        cout << "Village: ";
        getline(cin, s1[i].location.village);
        cout << "City: ";
        getline(cin, s1[i].location.city);
        cout << "Student Age: ";
        cin >> s1[i].age;
        cin.ignore(); // Clear the newline character from the buffer

    }

    return 0;
}