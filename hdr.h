#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class student
{
private:
	string name;
	int age;
public:
	string GetName();
	int GetAge();

	void input();
	void print();

	void input_txt(ifstream& inf);

	void SetName(string);
	void SetAge(int);

	student();
	~student();

	student(const student&);
	student(string, int);
};