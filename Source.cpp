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

	float mile, kilometer, meter, centimeter, millimeter;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program converts miles into kilometers, meters, centimeters, and millimeters" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input miles: ";
	cin >> mile;

	//Compute the conversions 
	kilometer = mile * 1.6;
	meter = kilometer * 1000;
	centimeter = meter * 100;
	millimeter = centimeter * 10;

	//Display the conversions 
	cout << " The conversion of kilometer from miles is = " << kilometer << "\n\n";
	cout << " The conversion of meter from miles is = " << meter << "\n\n";
	cout << " The conversion of centimeter from miles is = " << centimeter << "\n\n";
	cout << " The conversion of millimeter from miles is = " << millimeter << "\n\n";
	cout << "Program has ended" << endl;


	//Homework 1
	float celsius, fahrenheit;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in celsius and converts into fahrenheit" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input celsius: ";
	cin >> celsius;

	//Compute Fahrenheit = (9/5) * Celsius + 32
	fahrenheit = 9.0 / 5.0 * celsius + 32;

	//Display fahrenheit
	cout << " The the temperature in fahrenheit is = " << fahrenheit << "\n\n";
	cout << "Program has ended" << endl;


	//Homework 2
	float year, month, day, hour, minute, second;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program converts years into months, days, hours, minutes, and seconds " << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input your age: ";
	cin >> year;

	month = year * 12;
	day = year * 365.25;
	hour = day * 24.0;
	minute = hour * 60.0;
	second = minute * 60.0;

	//Display the conversions 
	cout << " your age in months is = " << month << "\n\n";
	cout << " your age in days is = " << day << "\n\n";
	cout << " your age in hours is = " << hour << "\n\n";
	cout << " your age in minutes is = " << minute << "\n\n";
	cout << " your age in seconds is = " << second << "\n\n";
	cout << "Program has ended" << endl;


	//Homework 3
	//Create string to print letter K
	//Extra credit for advanced code?
	char string1[6] = { '*','*',' ',' ',' ','*' };
	char string2[6] = { ' ',' ','*','*',' ','*' };
	char string3[6] = { ' ',' ',' ',' ','*','*' };
	char string4[6] = { ' ',' ',' ','*',' ','*' };
	char string5[6] = { ' ','*','*',' ',' ','*' };
	char string6[6] = { '*',' ',' ',' ',' ','*' };

	//Print letter K. A little assistance from Stack Overflow
	std::cout << "\n";
	for (int i = 6 - 1; i >= 0; i--)
		cout << string1[i];
	std::cout << "\n";
	for (int i = 6 - 1; i >= 0; i--)
		cout << string2[i];
	std::cout << "\n";
	for (int i = 6 - 1; i >= 0; i--)
		cout << string3[i];
	std::cout << "\n";
	for (int i = 6 - 1; i >= 0; i--)
		cout << string4[i];
	std::cout << "\n";
	for (int i = 6 - 1; i >= 0; i--)
		cout << string5[i];
	std::cout << "\n";
	for (int i = 6 - 1; i >= 0; i--)
		cout << string6[i];
	std::cout << "\n";

	//cout << string1[1] << endl"\n\n";
	/*cout << string2 "\n\n";
	cout << string3 "\n\n";
	cout << string4 "\n\n";
	cout << string5 "\n\n";
	cout << string6 "\n\n";*/

	system("pause");

	return 0;
}

