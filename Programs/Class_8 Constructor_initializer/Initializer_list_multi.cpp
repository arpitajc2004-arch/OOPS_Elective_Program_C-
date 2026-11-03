#include<iostream>
using namespace std;

class Person
{

public:
    void display1()
    {
        cout<<"Person Class"<<endl;
    }
};

class Student:public Person
{
public:
    void display2()
    {
        cout<<"Student Class"<<endl;
    }
};

class IT_Student:public Student
{
    string name;
    string USN;
    float cgpa;
public:
    IT_Student(string a,string b,float c): name(a),USN(b),cgpa(c){}
    void display3()
    {
        cout<<"IT_Student Class"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"USN: "<<USN<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};

int main()
{
Person p;
Student s;
IT_Student i("Arpita","01FE23BEC357",9.65);
p.display1();
cout<<endl;
s.display2();
s.display1();
cout<<endl;
i.display1();
i.display2();
i.display3();

return 0;
}
