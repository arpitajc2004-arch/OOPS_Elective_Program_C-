#include <iostream>
using namespace std;
class Complex
{
     private:
      int real;
      int imaginary;
     public :
      void set_data(int, int);
      void print();
      void addnum(Complex x, Complex y)
      {
          real = x.real+ y.real;
          imaginary = x.imaginary + y.imaginary;
      }
};
void Complex :: set_data (int x, int y)
{
    real = x;
    imaginary = y;
}
void Complex :: print()
{
    cout << "Real " << real << endl;
    cout << "Imaginary j" << imaginary << endl;
}
int main() {
    // Write C++ code here
    Complex c1, c2, c3;
    int r,i ;
    cout<< "Enter real part";
    cin>> r;
    cout << "Enter imaginary part";
    cin>> i;
    c1.set_data(r ,i);
    c1.print();
    cout<< "Enter real part";
    cin>> r;
    cout << "Enter imaginary part";
    cin>> i;
    c2.set_data(r,i);
    c2.print();
    c3.addnum(c1,c2);
    c3.print();
    return 0;
}
