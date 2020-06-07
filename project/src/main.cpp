#include <iostream>

using namespace std;

class Person
{
public:
	void ds();
	void init();

private:
	string name;
	int age;
};

void Person::init()
{
	name = "zhangsan";
	age = 10;
}

void Person::ds()
{
	cout << "name: " << name << ", age: " << age << endl;
}

int main(int argc, char *argv[])
{
	Person p;
	p.init();
	p.ds();
}