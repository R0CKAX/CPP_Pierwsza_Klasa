#include <iostream>
#include "person.h"

using namespace std;

int main() 
{
	// Adding polish characters to console view
	setlocale(LC_ALL, "");

	// Creating class object
	Person per;

	// Collecting data from user
	per.collect_data();

	// Printing out collected data and calculated BMI
	per.print_data();
	per.calculateBMI();

	return 0;
}