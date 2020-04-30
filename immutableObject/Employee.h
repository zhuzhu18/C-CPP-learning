#pragma once
#include <string>
#include "Date.h"
enum class Gender {male, female};

class Employee {

private:
	std::string name;
	Gender gender;
	Date birthday;

public:
	void setName(std::string name) { this->name = name; }
	void setGender(Gender gender) { this->gender = gender; }
	void setBirthday(Date birthday) { this->birthday = birthday; }

	std::string getName() { return name; }
	Gender getGender() { return gender; }
	Date* getBirthday() { return &birthday; }

	std::string toString() {
		return name + (gender == Gender::male ? "male" : "female") + birthday.toString();
	}
	Employee(std::string name, Gender gender, Date birthday) :name{ name }, gender{ gender }, birthday{birthday}{}
	Employee() :Employee("Alan", Gender::male, Date(2020, 4, 30)){}
};
