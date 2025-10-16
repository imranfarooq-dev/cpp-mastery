#include <iostream>

int main()
{
  std::string name;
  int age;
  float height;
  std::cout << "Please enter your name" << std::endl;
  std::getline(std::cin >> std::ws, name);

  std::cout << "Please enter your age" << std::endl;
  std::cin >> age;

  std::cout << "Please enter your height in cm " << std::endl;
  std::cin >> height;

  std::cout << "Hello " << name << "!" << std::endl;
  std::cout << "You are " << age << " years old and " << height << " cm tall.";

  return 0;
}