#include <iostream>
using namespace std;

class Rectangle
{
    int length, width;

public:

    // Default constructor
    Rectangle()
    {
        length = 10;
        width = 5;
    }
    // Parameterized constructor
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    // Copy constructor
    Rectangle(Rectangle &r)
    {
        length = r.length;
        width = r.width;
    }

    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
      ~Rectangle()
    {
        cout << "destructor" << endl ;
    }

};

int main()
{
    // Default constructor
    Rectangle r1;

    cout << "Default Constructor:" << endl;
    r1.display();

    // Parameterized constructor
    Rectangle r2(20, 10);

    cout << "\nParameterized Constructor:" << endl;
    r2.display();

    // Copy constructor
    Rectangle r3(r2);

    cout << "\nCopy Constructor:" << endl;
    r3.display();

    return 0;
}
