#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cmath>
using namespace std;


struct Point
{
    double x;
    double y;
};
float Distance(Point A, Point B)
{
    double result;
    result=sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
    return result;
}
Point AssignPoint()
{
    Point temp;
    temp.x=rand()%100;
    temp.y=rand()%100;
    return temp;
}

int main()
{
    double largdist=0;
    Point Points[10];
    for (int i=0; i<10; i++)
    {
        Points[i]=AssignPoint();
        cout << Points[i].x<<" "<<Points[i].y<<endl;
    }
    for (int i=0; i<10; i++)
    {

        for (int j=0; j<10; j++)if(j!=i)
        {
            cout<<Distance(Points[i],Points[j])<<endl;
            if (Distance(Points[i],Points[j])>largdist)largdist=Distance(Points[i],Points[j]);
        }
    }
    cout <<largdist;
    return 0;
}
