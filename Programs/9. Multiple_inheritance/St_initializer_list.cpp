#include<iostream>
using namespace std;

class Student
{
    int roll_no;
    string name;
public:

    Student(int a,string b):roll_no(a),name(b){}

};

class Test
{
    int marks;
public:
    Test(int c):marks(c){}
};

class Result:public Student,public Test
{
    int total_marks;
    float percentage;
public:
    Result(int d,float e,int r,string n,int m):Student(r,n),Test(m),total_marks(d),percentage(e){}
    void display()
    {

      cout<<"This is the total marks :"<<total_marks<<"\n This is the percentage :"<<percentage<<endl;
    }
};

int main()
{
    Result r1(97,99,656,"Arpita",98);
    r1.display();
    return 0;
}
