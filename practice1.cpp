#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    char section;
    int math_number;
    int cls;
    Student(string name, int roll, char section, int math_number, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_number = math_number;
        this->cls = cls;
    }
};

int main()
{
    Student arfin("arfin", 1, 'A', 90, 10);
    Student eusuf("eusuf", 15, 'B', 98, 10);
    Student ononno("Ononno", 2, 'A', 99, 10);

    if(arfin.math_number >= eusuf.math_number && arfin.math_number >= ononno.math_number)
    {
        cout<< arfin.name;
    }
    else if(eusuf.math_number>= ononno.math_number && eusuf.math_number>=arfin.math_number)
    {
        cout<< eusuf.name;
    }
    else if(ononno.math_number>=arfin.math_number && ononno.math_number>=eusuf.math_number)
    {
        cout<< ononno.name;
    }
    return 0;
}