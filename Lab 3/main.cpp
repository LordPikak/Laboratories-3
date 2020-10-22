#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cmath>
using namespace std;


struct Point
{
    double x;
    double y;
    void print()
    {
        cout <<"["<<x<<","<<y<<"]"<<endl;
    }
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
    double largdist=0, distances[90];
    Point Points[10];
    for (int i=0; i<10; i++)
    {
        Points[i]=AssignPoint();
        Points[i].print();
    }
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)if(j!=i)
        {
            cout<<Distance(Points[i],Points[j])<<endl;
            if (Distance(Points[i],Points[j])>largdist)largdist=Distance(Points[i],Points[j]);
            for(int n=0;n<90;n++)distances[n]=Distance(Points[i],Points[j]);
        }
    }
    cout <<largdist;
    return 0;
}
