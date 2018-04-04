/*****************************************************************************
**Name: Aseem Prashar
**Date: 09/30/17
**Description: To convert Celsius temperature to Fahrenheit temperatures.
*****************************************************************************/

# include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	double cTemp, fTemp;
	//Enter the temperatur in Celsius for conversion.
	cout << "Please enter a Celsius temperature." << endl;
	cin >> cTemp;
	// Convert the temperature from Celsius to Fahrenheit.
	fTemp = (9.0 / 5.0)* cTemp + 32;

	//Display the converted temperature in Fahrenheit.
	cout << "The equivalent Fahrenheit temperature is: \n" << fTemp <<endl ;

	return 0;

}

