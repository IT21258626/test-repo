#include<iostream>
using namespace std;

int main()
{
	/*
	float annualSalary;
	cout << "Please enter your annual salary :";
	cin >> annualSalary;
	float monthlySalary = annualSalary / 12;
	cout << "Your monthly salary is " << monthlySalary << endl;
	cout << "In 10 yaers you will earn : " << annualSalary * 10;
	*/


	/*
	int yearOfBirth = 1999;
	char gender = 'm';
	bool isOlderThan18 = true;
	float averageGrade = 4.5;
	double balance = 453625255852;


	cout << "Size of int is " << sizeof(int) << " bytes\n";

	cout << " Int min value is " << INT_MIN << endl;

	cout << "Int max value is " << INT_MAX << endl;
	*/


	/*
	int intMax = INT_MAX;
	cout << intMax << endl;
	cout << intMax + 1 << endl;  
	*/

	/*
	cout << (int)'a' << endl;
	cout << int('a') << endl;
	cout << int('A') << endl;
	cout << char(65) << endl;
	*/

	/*
	char c1, c2, c3, c4, c5;
	cout << "Enter 5 letter word :";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	cout << "ASCII message is : " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);
	*/

	//user enter integer number
	//program write out if that number even or odd

	int number;
	cout << "Please enter integer number : ";
	cin >> number;

	if (number % 2 == 0)
	{
		cout << "This is an even number";
	}
	else
	{
		cout << "This is an odd number";
	}

	






	system("pause>0");
}