#pragma once
#include "Person.h"
class Student :
    public Person
{
private:
    string level;
    string dept;

public:
    void setLevel(string l);
    string getLevel();
    void setDept(string d);
    string getDept();
    void printInfo();
    Student();
    Student(string n,int a,string l,string d);

};

