#include "person.h"
#include <iostream>

Person::Person()
{
	std::cout << "Utworzono obiekt w klasie Person\n";
	std::cout << "--------------\n\n";
	// Nie dokonuje podstawowej inicjalizacji zmiennych poniewaz wartosci bedzie podawac uzytkownik
}

Person::~Person()
{
	std::cout << '\n' << "Usunieto obiekt za pomoca destruktora\n";
}

// SETTERY
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


// GETTERY
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

void Person::print_data()
{
	std::cout << "\n\nTWOJE DANE" << "\n--------------\n";
	std::cout << "Masz " << Person::get_age() << " lat/a.\n";
	std::cout << "Wazysz " << Person::get_weight() << " kg.\n";
	std::cout << "Masz " << Person::get_height() << "m wzrostu.\n";

	if (gender == 'M' || gender == 'm')
	{
		std::cout << "Jestes mezczyzna.\n";
	}
	else if (gender == 'K' || gender == 'k')
	{
		std::cout << "Jestes kobieta.\n";
	}
	else
	{
		std::cout << "Nie czules sie komfortowo z podaniem swojej plci.\n";
	}

	std::cout << "Chodzisz do " << Person::get_grade() << " klasy.\n";
	std::cout << "Twoj ulubiony numer to " << Person::get_fav_num() << ".\n";
}

// Obliczanie BMI studenta
void Person::calculateBMI(float weight_, float height_)
{
	bmi = weight_ / (height_ * height_);
	std::cout << '\n' << "BMI dla podanych przez Ciebie danych wynosi " << bmi << "\n\n";
}
