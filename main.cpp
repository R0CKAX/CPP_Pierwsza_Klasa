#include <iostream>
#include "person.h"

using namespace std;

int main() 
{
	// Tworzenie obiektu klasy
	Person per;

	int age;
	float weight;
	float height;
	char gender;
	int grade;
	int fav_num;

	cout << "KALKULATOR BMI" << '\n' << "--------------" << '\n';
	cout << "Podaj swoj wiek: ";
	cin >> age;

	cout << "Podaj swoja wage (w kilogramach): ";
	cin >> weight;

	cout << "Podaj swoj wzrost (w metrach): ";
	cin >> height;

	cout << "Podaj swoja plec (M - Mezczyzna , K - Kobieta): ";
	cin >> gender;

	cout << "Podaj klase, do ktorej chodzisz: ";
	cin >> grade;

	cout << "Podaj swoj ulubiony numer: ";
	cin >> fav_num;

	// Calling methods
	per.set_age(age);
	per.set_weight(weight);
	per.set_height(height);
	per.set_gender(gender);
	per.set_grade(grade);
	per.set_fav_num(fav_num);

	// Printing out collected data and calculated BMI
	per.print_data();
	per.calculateBMI(weight, height);

	return 0;
}