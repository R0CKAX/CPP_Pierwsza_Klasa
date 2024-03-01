#pragma once
#include <iostream>

class Person
{
private:
	int age;
	float weight;
	float height;
	char gender;
	int grade;
	int fav_num;
	float bmi;

public:
	/// <summary>
	/// Calculate BMI of a student
	/// Returns bmi
	/// <summary>
	/// <param name="age"> student's age </param>
	/// <param name="weight"> student's height </param>
	/// <param name="height"> student's height </param>
	/// <param name="gender"> student's gender (M = male, K = female) </param>
	/// <param name="grade"> student's grade of education he is currently at </param>
	/// <param name="fav_num"> student's favorite number </param>
	/// <param name="bmi"> student's bmi based on height and weight </param>
	
	// Constructor
	Person();
	
	// Destructor
	~Person();

	// Setting values
	void set_age(int age_);
	void set_weight(float weight_);
	void set_height(float height_);
	void set_gender(char gender_);
	void set_grade(int grade_);
	void set_fav_num(int fav_num_);

	// Getting values
	int get_age();
	float get_weight();
	float get_height();
	char get_gender();
	int get_grade();
	int get_fav_num();

	// Method for printing all student's data
	void print_data();

	// Method for calculating student's BMI
	void calculateBMI(float weight_, float height_);

};