#include<iostream>
using namespace std;
class Rectangle
{
private:
    float length;
    float width;
public:
    Rectangle(float l, float w)
    {
       length = l;
       width = w;
    }
    Rectangle(Rectangle &x)
    {
        length = x.length;
        width = x.width;
    }
    Rectangle()
    {
        cin >> length;
        cin >> width;
    }
    void print()
    {
        cout << "Length " << length << endl;
        cout << "Width " << width << endl;
    }
};
int main()
{
    Rectangle r1(3.24 , 23.23) ,r2(r1), r3;
    r1.print();
    r2.print();
    r3.print();
}


