#include<iostream>
using namespace std;
class Employee
{
private:
    int ID;
    string dept;
public:
    Employee()
    {
        cin >> ID;
        cin >> dept;
    }
    void print()
    {
        cout << "EMP ID " << ID << endl;
        cout << "EMP dept " << dept << endl;
    }
};
int main()
{
    Employee e1 ,e2;
    e1.print();
    e2.print();
}
