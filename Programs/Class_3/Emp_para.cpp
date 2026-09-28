#include<iostream>
using namespace std;
class Employee
{
private:
    string name;
    int ID;
    string dept;
    float salary;
public:
    Employee(string name1, int id, string dept1, float sal)
    {
       name = name1;
       ID = id;
       dept = dept1;
       salary = sal;
    }
    void print()
    {
        cout << "EMP name " << name << endl;
        cout << "EMP ID " << ID << endl;
        cout << "EMP dept " << dept << endl;
        cout << "EMP salary " << salary << endl;
    }
};
int main()
{
    Employee e1("Arpita", 357 , "EC" ,10000000) ,e2("Sita" , 628 , "EC" ,200000);
    e1.print();
    e2.print();
}

