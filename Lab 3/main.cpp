#include <iostream>
using namespace std;



int main()
{
    int temp;
    int numbahs[10]= {7, 3, 9, 2, 5, 1, 5, 20, 8, 4};
    for (int j=10; j>0; j--)
    {
        for (int i=0; i<10; i++)
            {
                if (numbahs[i]<numbahs[i+1])
                {
                    temp=numbahs[i];
                    numbahs[i]=numbahs[i+1];
                    numbahs[i+1]=temp;
                }
                cout << numbahs[i];
            }
        cout << endl;
    }


    return 0;
}
