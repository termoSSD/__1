#include "hdr.h"

int main()
{
	ifstream infile("data.txt");

	int choise;
	int count;
	int age;
	int count_of_people_age = 0;
	bool found = false;

	cout << "How many students in file: ";
	cin >> count;

	student* mass = new student[count];

	for (int i = 0; i < count; i++)
	{
		mass[i].input_txt(infile);
	}
	infile.close();

	do
	{
		cout << "What you gona do:\n1.Show list of students\n2.Find students by age\nType number: ";
		cin >> choise;
	} while (choise != 2 && choise != 1);

	switch (choise)
	{
	case(1):
	{
		cout << "\n--- Students List ---";
		for (int i = 0; i < count; i++)
		{
			mass[i].print();
		}
		break;
	}

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
	delete[] mass;
	}
	/**/
}