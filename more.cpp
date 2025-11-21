
// ---------------------
    //phitron instructor solve
#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    char name[100];
    int roll;
    char section;

    Student(char name[], int roll, char section) {
        strcpy(this->name, name);  
        this->roll = roll;
        this->section = section;
    }
};

Student* fun() {
    char name[100];
    cin >> name;   
    Student* rakib = new Student(name, 10, 'S');
    return rakib;
}

int main() {
    Student* p = fun();
    cout << p->name << " " << p->roll << " " << p->section;
    return 0;
}