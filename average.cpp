/****************************************************************************
**Name: Aseem Prashar
**Date: 09/30/17
**Description: To calculate average of five numbers.
*****************************************************************************/

# include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	double firstNum, secondNum , thirdNum , fourthNum , fifthNum , average;
	// Enter your numbers for average.
	cout << "Please enter five numbers."<<endl;
	cin >> firstNum >> secondNum >> thirdNum >> fourthNum >> fifthNum;
		
	//Calculate the average of numbers.
	average = (firstNum + secondNum + thirdNum + fourthNum + fifthNum) / 5;

	//Display the average of the 5 numbers entered.
	cout << "The average of those numbers is: \n" << average << endl;
	
	return 0;
}
