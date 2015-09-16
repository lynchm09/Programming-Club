#include <iostream>
using namespace std;

int main()
{
	cout << "What is the first side length of your triangle?" << endl;
	int side1;
	cin >> side1;

	cout << "What is the second side length of your triangle?" << endl;
	int side2;
	cin >> side2;

	cout << "What is the third side length of your triangle?" << endl;
	int side3;
	cin >> side3;

	if (side1 == side2 && side1 == side3)
	{
		cout << "Your triangle is equilateral!" << endl;
	}
	else if (side1 != side2 && side3 != side1 && side2 != side3)
	{
		cout << "Your triangle is Scalene!" << endl;
	}
	else if (side1 == side2 && side1 != side3)
	{
		cout << "Your triangle is isosceles!" << endl;
	}
	else if (side1 == side3 && side1 != side2)
	{
		cout << "Your triangle is isosceles!" << endl;
	}
	else if (side2 == side3 && side2 != side1)
	{
		cout << "Your triangle is isosceles!" << endl;
	}


	return 0;
}
