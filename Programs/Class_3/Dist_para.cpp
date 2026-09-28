#include<iostream>
using namespace std;
class Distance
{
private:
    float feet;
    float inch;
public:
    Distance(float feet1, float inch1)
    {
       feet = feet1;
       inch = inch1;
    }
    void print()
    {
        cout << "FEET " << feet << endl;
        cout << "INCH " << inch << endl;
    }
};
int main()
{
    Distance d1(357 ,1000000) ,d2(2.3 , 32.12);
    d1.print();
    d2.print();
}

