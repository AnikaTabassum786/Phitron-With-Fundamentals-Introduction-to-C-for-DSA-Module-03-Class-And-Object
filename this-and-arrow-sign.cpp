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
        this->roll = roll; // roll=1
        this->cls = cls;  // cls=2
        this->cgpa = cgpa; // cgpa=5.00
    }
};

int main()
{
    Student rahim(1, 2, 4.00); // 1,2,5.00 goes in constructor
    cout << rahim.roll << " " << rahim.cls << " " << fixed << setprecision(2) << rahim.cgpa;

    return 0;
}