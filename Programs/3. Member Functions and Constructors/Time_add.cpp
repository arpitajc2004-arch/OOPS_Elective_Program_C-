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

      void addtime(Time x, Time y)
      {
          hour = x.hour+ y.hour;
          minute = x.minute + y.minute;
          second = x.second + y.second;
      }
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
    Time t1, t2, t3;
    int h,m,s ;
    cout<< "Enter hour";
    cin>> h;
    cout << "Enter minute";
    cin>> m;
    cout << "Enter second";
    cin>> s;
    t1.set_time(h,m,s);
    t1.print();
    cout<< "Enter hour";
    cin>> h;
    cout << "Enter minute";
    cin>> m;
    cout << "Enter second";
    cin>> s;
    t2.set_time(h,m,s);
    t2.print();
    t3.addtime(t1,t2);
    t3.print();
    return 0;
}
