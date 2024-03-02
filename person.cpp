#include "person.h"
#include <iostream>

Person::Person()
{
	std::cout << "Utworzono obiekt w klasie Person\n";
	std::cout << "--------------\n\n";
	// No need for initializing base values of variables because the user does that for us
}

Person::~Person()
{
	std::cout << '\n' << "Usunieto obiekt za pomoca destruktora\n";
}

// SETTERS
void Person::set_age(int age_)
{
	age = age_;
}

void Person::set_weight(float weight_)
{
	weight = weight_;
}

void Person::set_height(float height_)
{
	height = height_;
}

void Person::set_gender(char gender_)
{
	gender = gender_;
}

void Person::set_grade(int grade_)
{
	grade = grade_;
}

void Person::set_fav_num(int fav_num_)
{
	fav_num = fav_num_;
}


// GETTERS
int Person::get_age()
{
	return age;
}

float Person::get_weight()
{
	return weight;
}

float Person::get_height()
{
	return height;
}

char Person::get_gender()
{
	return gender;
}

int Person::get_grade()
{
	return grade;
}

int Person::get_fav_num()
{
	return fav_num;
}

void Person::collect_data()
{
	int age_;
	float weight_;
	float height_;
	char gender_;
	int grade_;
	int fav_num_;

	std::cout << "KALKULATOR BMI" << '\n' << "--------------" << '\n';
	std::cout << "Podaj swój wiek: ";
	std::cin >> age_;

	std::cout << "Podaj swoj¹ wagê (w kilogramach): ";
	std::cin >> weight_;

	std::cout << "Podaj swój wzrost (w metrach): ";
	std::cin >> height_;

	std::cout << "Podaj swoj¹ p³eæ (M - Mê¿czyzna , K - Kobieta): ";
	std::cin >> gender_;

	std::cout << "Podaj klasê, do której chodzisz: ";
	std::cin >> grade_;

	std::cout << "Podaj swój ulubiony numer: ";
	std::cin >> fav_num_;

	set_age(age_);
	set_weight(weight_);
	set_height(height_);
	set_gender(gender_);
	set_grade(grade_);
	set_fav_num(fav_num_);
}

void Person::print_data()
{
	std::cout << "\n\nTWOJE DANE" << "\n--------------\n";
	std::cout << "Masz " << Person::get_age() << " lat/a.\n";
	std::cout << "Wa¿ysz " << Person::get_weight() << " kg.\n";
	std::cout << "Masz " << Person::get_height() << "m wzrostu.\n";

	if (gender == 'M' || gender == 'm')
	{
		std::cout << "Jesteœ mê¿czyzna.\n";
	}
	else if (gender == 'K' || gender == 'k')
	{
		std::cout << "Jesteœ kobiet¹.\n";
	}
	else
	{
		std::cout << "Nie czu³eœ/aœ sie komfortowo z podaniem swojej p³ci.\n";
	}

	std::cout << "Chodzisz do " << Person::get_grade() << " klasy.\n";
	std::cout << "Twój ulubiony numer to " << Person::get_fav_num() << ".\n";
}

// Calculating students BMI
void Person::calculateBMI()
{
	bmi = weight / (height * height);
	std::cout << '\n' << "BMI dla podanych przez Ciebie danych wynosi " << bmi << "\n\n";
}