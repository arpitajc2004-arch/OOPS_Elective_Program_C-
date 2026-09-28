#include<iostream>
using namespace std;
class car
{
private:
    float mileage;
public:
    car()
    {
        cin >> mileage;
    }
    ~ car()
    {
        cout << "destructor";
    }
};
int main()
{
    car c1 ,c2;
}
