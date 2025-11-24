#include "hdr.h"

int main()
{
	ifstream infile("data.txt");

	int choise;
	int count;

	int age;
	int count_of_people_age = 0;

	string name;
	int count_of_people_name = 0;

	bool found = false;

	cout << "How many students in file: ";			
	cin >> count;

	student* mass = new student[count];			// динамічний масив типу student 

	// заповнення масиву з файлу за допомогою циклу, після чого файл зразу закривається
	for (int i = 0; i < count; i++)
	{
		mass[i].input_txt(infile);
	}
	infile.close();

	float min_element = min_avg(mass, count);	// змінна для пошуку мінімального занчення середнього балу 

	// меню програми 
	do
	{
		cout << "What you gona do:";
		cout << "\n1.Show list of students";
		cout << "\n2.Find students by age";
		cout << "\n3.Find student by name";
		cout << "\n4.Min average point";
		cout << "\nType number: ";
		cin >> choise;
	} while (choise != 1 && choise != 2 && choise != 3 && choise != 4);

	// вибір
	switch (choise)
	{
		// сортований список студентів
	case(1):
	{
		sort(mass, count);
		cout << "\n--- Students List ---";
		for (int i = 0; i < count; i++)
		{
			mass[i].print();
		}
		break;
	}
		// пошук студентів по віку
	case(2):
	{
		cout << "Enter age: ";
		cin >> age;

		cout << "\n--- Search Results ---";
		for (int i = 0; i < count; i++)
		{
			if (mass[i].GetAge() == age)
			{
				mass[i].print();
				found = true;
				count_of_people_age++;
			}
		}
		if (!found) {
			cout << "\nNo students found with age " << age;
		}
		else {
			cout << "\n\nTotal found: " << count_of_people_age;
		}
		break;
	} 
		// пошук студента по імені
	case(3):
	{
		cout << "Enter name: ";
		cin >> name;

		cout << "\n--- Search Results ---";
		for (int i = 0; i < count; i++)
		{
			if (mass[i].GetName() == name)
			{
				mass[i].print();
				found = true;
				count_of_people_name++;
			}
		}
		if (!found) {
			cout << "\nNo students found with name " << name;
		}
		else {
			cout << "\n\nTotal found: " << count_of_people_name;
		}
		break;
	}
		// вивід мінімального середнього балу
	case(4):
	{
		cout << "Min = " << min_element;
		break;
	}

	}
	delete[] mass;	// очищення масиву
	}
