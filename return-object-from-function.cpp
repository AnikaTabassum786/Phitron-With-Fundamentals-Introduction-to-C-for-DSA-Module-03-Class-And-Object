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
        roll = r;
        cls = c;
        cgpa = g;
    }
};

Student fun()
{
    Student rahim(1, 2, 5.00);
    return rahim;
}

int main()
{
    Student obj = fun();
    cout << obj.roll << " " << obj.cls << " " << fixed << setprecision(2) << obj.cgpa;

    return 0;
}
