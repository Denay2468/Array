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
    student s1;

    cout << "Student ID: " << s1.id << endl;
    getline(cin, s1.id); // Input new ID for the student
    cout << "Student Name: " << s1.name << endl;
    getline(cin, s1.name); // Input new name for the student
    cout << "Student Location: " << endl;
    cout << "Student Location - Village: " ;
    cin >> s1.location.village ;
    cout << "Student Location - City: " ;
    cin >> s1.location.city ;
    cout << "Student Age: " << s1.age << endl;
    cin >> s1.age; // Input new age for the student

    cout << "Updated Student Information:" << endl;
    cout << "Student ID: " << s1.id << endl;
    cout << "Student Name: " << s1.name << endl;

    cout << "Student Location: " ;
    cout << "Village: " << s1.location.village << ", City: " << s1.location.city << endl;
    cout << "City: " << s1.location.city << endl;
    
    cout << "Student Age: " << s1.age << endl;


    return 0;
}