#include<iostream>
using namespace std;

class demo
{
    static int count;
public:
    void getcount()
    {
        cout<<"count="<<++count<< endl;
    }
};
int demo :: count;
int main()
{
    demo d1,d2,d3;
    d1.getcount();
    //d1.display();
    d2.getcount();
    //d2.display();
    d3.getcount();
    //d3.display();
    return 0;
}
