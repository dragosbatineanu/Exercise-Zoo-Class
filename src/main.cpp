#include "Animals.h"


int main() {
	std::string name;
	std::string species;
	int age;

	std::cout << "Enter the name, species and age of the animal:" << std::endl;
	std::getline(std::cin, name);
	std::getline(std::cin, species);
	std::cin >> age;

	Animal obj(name, species, age);

	std::cout << "Information about the animal:" << std::endl;
	std::cout << obj.getName() << std::endl;
	std::cout << obj.getSpecies() << std::endl;
	std::cout << obj.getAge() << std::endl;


}