#include <iostream>
using namespace std;

void swapNumbers(int x, int y)
{
    int temp=x;
    x=y;
    y=temp;
    cout<<"After swapping: x = "<<x << ",y = "<<y<< endl;
}

int main()
{
    int x,y;
    x=10;
    y=20;

    cout<<"Before swapping: x = "<<x << ",y = "<<y<< endl;

    swapNumbers(x, y);

    return 0;
}
