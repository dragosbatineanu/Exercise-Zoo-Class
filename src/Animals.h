#pragma once

#include <iostream>
#include <string>

class Animal {
private:
	std::string name;
	std::string species;

	int age;

public:

	Animal(std::string& n, std::string& s, int a);

	void setName(std::string& n);
	void setSpecies(std::string& s);
	void setAge(int a);

	std::string getName() const;
	std::string getSpecies() const;
	int getAge() const;
};