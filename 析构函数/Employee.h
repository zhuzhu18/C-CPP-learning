#pragma once
#include <string>
#include "Date.h"
enum class Gender {male, female};

class Employee {

private:
	std::string name;
	Gender gender;
	Date* birthday;
	static int numberOfObjects;
public:
	void setName(std::string name) { this->name = name; }
	void setGender(Gender gender) { this->gender = gender; }
	void setBirthday(Date birthday) { *(this->birthday) = birthday; }

	std::string getName() { return name; }
	Gender getGender() { return gender; }
	Date* getBirthday() { return birthday; }

	std::string toString() {
		return name + (gender == Gender::male ? "male" : "female") + birthday->toString();
	}
	Employee(std::string name, Gender gender, Date birthday) :name{ name }, gender{ gender }{
		numberOfObjects++;
		this->birthday = new Date{ birthday };
		std::cout << "now there are " << numberOfObjects << " employees"<<std::endl;
	};
	Employee() :Employee("Alan", Gender::male, Date{ 2020, 5, 1 }) {};
	~Employee() {
		numberOfObjects--;
		delete birthday;
		birthday = nullptr;
		std::cout << "now there are " << numberOfObjects << " employees" << std::endl;
	}
};
