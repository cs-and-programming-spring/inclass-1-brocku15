#include <iostream>

using namespace std;

const  float PI = 3.14159;

int main()
{

	float radius, area, circumference;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in radius to compute circumference of circle" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input radius: ";
	cin >> radius;

	//Compute circumference 2PI*R
	circumference = PI * radius * 2;

	//Display the circumference
	cout << " The circumference of the circle is = " << circumference << "\n\n";
	cout << "Program has ended" << endl;

	float mile, kilometer, meter, centimeter, milimeter;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program converts miles into kilometers, meters, centimeters, and milimeters" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input miles: ";
	cin >> mile;

	//Compute the conversions 
	kilometer = mile * 1.6;
	meter = kilometer * 1000;
	centimeter = meter * 100;
	milimeter = centimeter * 10;

	//Display the conversions 
	cout << " The conversion of kilometer from miles is = " << kilometer << "\n\n";
	cout << " The conversion of meter from miles is = " << meter << "\n\n";
	cout << " The conversion of centimeter from miles is = " << centimeter << "\n\n";
	cout << " The conversion of milimeter from miles is = " << milimeter << "\n\n";
	cout << "Program has ended" << endl;


	system("pause");

	return 0;
}
