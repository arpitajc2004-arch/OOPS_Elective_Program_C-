#include <iostream>
using namespace std;
class Time
{
     private:
      int hour;
      int minute;
      int second;
     public :
      void set_time(int, int, int);
      void print();
};
void Time :: set_time (int x, int y, int z)
{
    hour = x;
    minute = y;
    second = z;
}
void Time :: print()
{
    cout << "Hour " << hour << endl;
    cout << "Minute " << minute << endl;
    cout << "Second " << second << endl;
}
int main() {
    // Write C++ code here
    Time t;
    int h,m,s ;
    cout<< "Enter hour";
    cin>> h;
    cout << "Enter minute";
    cin>> m;
    cout << "Enter second";
    cin>> s;
    t.set_time(h,m,s);
    t.print();
    return 0;
}
