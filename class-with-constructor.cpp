#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double cgpa;

    Student(int r, int c, double g)
    {
        roll = r; // rol=1
        cls = c;  // cls=2
        cgpa = g; // cgpa=5.00
    }
};

int main()
{
    Student rahim(1, 2, 5.00); // 1,2,5.00 goes in constructor
    cout << rahim.roll << " " << rahim.cls << " " << fixed << setprecision(2) << rahim.cgpa;

    return 0;
}