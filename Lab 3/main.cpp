#include <iostream>
using namespace std;


struct Point
{
    double x;
    double y;
};

int main()
{
    Point mypoint;
    mypoint.x=2;
    mypoint.y=3.3;
    cout<<mypoint.x<<endl;
    cout<<mypoint.y<<endl;
    return 0;
}
