#include <iostream>
using namespace std;
class Student
{
     private:
      string name;
      int age;
     public :
      void SetData();
      void DisplayData();
};
void Student :: SetData()
      {
        cout<< "Enter name ";
        cin>> name;
        cout << "Enter age ";
        cin>> age;
      }
void Student :: DisplayData()
      {
        cout << "name =" << name << endl;
        cout << "age= " << age<<endl;
      }
int main() {
    // Write C++ code here
    Student s1;
    s1.SetData();
    s1.DisplayData();
    return 0;
}

