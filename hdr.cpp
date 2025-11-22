#include "hdr.h"

string student::GetName()
{
    return name;
}

int student::GetAge()
{
    return age;
}

void student::input()
{
    cout << "Name: ";
    cin >> name;

    cout << "Age: ";
    cin >> age;
}

void student::print()
{
    cout << "\nName: " << name; 
    cout << "\nAge: " << age;
}

void student::input_txt(ifstream& inf)
{
    inf >> name;
    inf >> age;
}

void student::SetName(string N)
{
    name = N;
}

void student::SetAge(int A)
{
    age = A;
}

student::~student() 
{
    cout << "\n\n\n\n\n\n\n\nEnd of program";
}

student::student()
{
    name = "NoName";
    age = 17;
}

student::student(const student& S)
{
    name = S.name;
    age = S.age;
}

student::student(string N, int A)
{
    name = N;
    age = A;
}

