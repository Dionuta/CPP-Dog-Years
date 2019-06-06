#include <iostream>


int main() {
  
  std::string dog_name;
  int dog_age; //The dog's age.

  int early_years, later_years, human_years;

  std::cout << "Enter your dog's name: ";
  std::cin >> dog_name;
    
  std::cout << "Enter your dog's age: ";
  std::cin >> dog_age;
    
  early_years = 21; //for your dog’s first two years
  
  later_years = (dog_age - 2) * 4; //for your dog’s following years
    
  human_years = early_years + later_years; // for human years

  std::cout << "My name is " << dog_name << "! Ruff Ruff, I am " << human_years << " years old in human years.\n";

}