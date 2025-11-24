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
	int avg;
public:
	string GetName();
	int GetAge();

	// ввід даних з клавіатури
	void input();
	//вивід даних
	void print();

	void input_txt(ifstream& inf);

	void SetName(string);
	void SetAge(int);

	// конструктор і деструктор
	student();
	~student();
	
	student(const student&);
	student(string, int);

	// змінна пошуку мінімального значення
	friend float min_avg(student*, int);
	// змінна для сортування по імені
	friend void sort(student*, int);
};