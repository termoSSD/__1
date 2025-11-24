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

    cout << "Avg: ";
    cin >> avg;
}

void student::print()
{
    cout << "\nName: " << name; 
    cout << "\nAge: " << age;
    cout << "\nAvg: " << avg;
}

void student::input_txt(ifstream& inf)
{
    inf >> name;
    inf >> age;
    inf >> avg;
}

void student::SetName(string N)
{
    name = N;
}

void student::SetAge(int A)
{
    age = A;
}

student::~student() {}

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

float min_avg(student* S, int n)
{
    float min = S[0].avg;
    for (int i = 0; i < n; i++)
    {
        if (S[i].avg < min) 
        {
            min = S[i].avg;
        }
    }
    return min;
}

void sort(student* S, int n)
{
    student T;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (S[j].name < S[j + 1].name)
            {
                T = S[j];
                S[j] = S[j + 1];
                S[j + 1] = T;
            }
        }
        
    }
}
