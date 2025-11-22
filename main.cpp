#include "hdr.h"

int main()
{
	ifstream infile("data.txt");

	int count;

	student st;

	cout << "how many students in file: ";
	cin >> count;

	while (count > 0)
	{
		st.input_txt(infile);
		st.print();
		--count;
	}
}