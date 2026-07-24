#include<iostream>
#include<stdexcept>
using namespace std;

class Student {
private:
	string name;
	int age;
	


public:
	int degree;
	void setName(string n){
	
		name = n;
	}
	string getName() { return name; }

	void setAge(int a) {
		if (a > 0) {
			age = a;
		}
		else {
			cout << "the age dosent match" << endl;
		}
	}
		int getAge() {
			return age;
	
	}
	void printStudentInfo() {
		cout << "the name is " << name << "the age is " << age << "the degree is " << degree << endl;
	}

	

};
int main() {

	Student s1;
	s1.setName("Mohammed");
	s1.setAge(27);
	
	Student s2;
	s2.degree = 90;
	s1.degree = 70;
	s2.setName("osama");
	s2.setAge(23);
	s1.printStudentInfo();
	s2.printStudentInfo();



}