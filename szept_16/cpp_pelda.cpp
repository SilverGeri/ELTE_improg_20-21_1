#include <iostream>


class Person {
private:
	int age = 0;
	std::string name;
public:
	Person(std::string name, int age): name(name), age(age) {}

	int getAge() {
		return this->age;
	}

	std::string getName() {
		return this->name;
	}
};

class Student : public Person {
	public:
		std::vector<std::string> classes;
	
	public:
		Student(std::string name, int age): Person(name, age) {}
}

int main() {
	Student p("Geri", 29);
	p.classes.push_back("improg");
	p.classes.push_back("funkc prog");

	std::cout << p.name << " " << p.getAge() << std::endl;
}
