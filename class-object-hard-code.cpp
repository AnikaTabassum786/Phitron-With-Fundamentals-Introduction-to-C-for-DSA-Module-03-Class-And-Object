// input
// Anika  10 4.92

// output
// Anika 10 4.92

#include <bits/stdc++.h>
using namespace std;

class  Student{
    public:
    char name[100];
    int roll;
    double gap;
   
};


int main(){
    Student a;
    a.roll=10;
    a.gap=4.92;
    char temp[100] = "Anika";
    strcpy(a.name,temp);
    
    cout << a.name << " " << a.roll << " " << a.gap;
    
    return 0;
}