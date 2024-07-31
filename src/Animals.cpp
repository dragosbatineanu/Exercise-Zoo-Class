#include "Animals.h"

Animal::Animal(std::string& n, std::string& s, int a) 
	: name(n), species(s), age(a) {}

void Animal::setName(std::string& n) 
{
	name = n;
}


void Animal::setSpecies(std::string& s) 
{
	species = s;
}

void Animal::setAge(int a) 
{
	age = a;
}

std::string Animal::getName() const 
{
	return name;
}

std::string Animal::getSpecies() const 
{
	return species;
}

int Animal::getAge() const {
	return age;
}