#include "hdr.h"

int main()
{
	ifstream infile("data.txt");

	int count;

	student st;

	cout << "how many students in file: ";
	cin >> count;

	student* mass = new student[count];

	for (int i = 0; i < count; i++)
	{
		mass[i].input_txt(infile);
	}

	for (int i = 0; i < count; i++)
	{
		mass[i].print();
	}
}