#include <iostream>
using namespace std;
class Rectangle
{
     private:
      int w;
      int h;
     public :
      void set_values(int, int);
      int area()
      {
         return w*h;
      }
};
void Rectangle :: set_values (int x, int y)
{
    w = x;
    h = y;
}
int main() {
    // Write C++ code here
    Rectangle rect;
    int width,height;
    cout<< "Enter width ";
    cin>> width;
    cout << "Enter height ";
    cin>> height;
    rect.set_values(width,height);
    cout << "area: " << rect.area();
    return 0;
}
