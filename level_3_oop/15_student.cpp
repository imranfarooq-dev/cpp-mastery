#include <iostream>
#include <string>
#include <vector>

class Student
{
    std::string name;
    int age;
    int mark;

public:
    Student() {};
    Student(std::string name, int age, int mark)
    {
        this->name = name;
        this->age = age;
        this->mark = mark;
    };

    void display()
    {
        std::cout << name << " is " << age << " years old having " << mark << " out of 100 in 10th grade. " << std::endl;
    };

    void addData()
    {
        std::cout << "Enter name: ";
        std::cin >> name;

        std::cout << "Enter age: ";
        std::cin >> age;

        std::cout << "Enter mark: ";
        std::cin >> mark;
    }
};

int main()
{
    Student Imran("imran", 20, 90);
    Imran.display();

    std::vector<Student> students;
    int n;
    std::cout << "How many students would you like to add?: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        Student s;
        s.addData();
        students.push_back(s);
    }
    std::cout << "\n--- All Students ---\n";

    for (auto s : students)
    {
        s.display();
    }

    return 0;
}