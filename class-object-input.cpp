// input
// Anika Tabassum 
// 10 4.92
// Jinuk Ahmed
// 20 4.50

// output
// Anika Tabassum  10 4.92
// Jinuk Ahmed 20 4.5

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a, b;
    // cin >> a.name >> a.roll >> a.gpa;
    // cin >> b.name >> b.roll >> b.gpa;
    cin.getline(a.name,100);
    cin >> a.roll >> a.gpa;
    cin.ignore();
    cin.getline(b.name,100);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
    return 0;
}