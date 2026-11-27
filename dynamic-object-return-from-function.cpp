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

Student* fun(){
  Student* karim = new Student(2,5,5.00);
 return karim;
}

int main()
{
    
  Student* p = fun();
  //(*p.roll)     (*p.cls)     (*p.cgpa)
  cout << p->roll << p->cls << p->cgpa << endl;
    return 0;
}