#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double cgpa;

    Student(int roll, int cls, double cgpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};

Student fun()
{
}

int main()
{
    Student rahim(1, 2, 4.00);// static
    cout << rahim.roll << " " << rahim.cls << " " << fixed << setprecision(2) << rahim.cgpa << endl;;

    Student *karim = new Student(10, 5, 4.3); //Dynamic
    cout << karim->roll << " " << karim->cls << " " << fixed << setprecision(2) << karim->cgpa;
    return 0;
}