
#ifndef twoCross_h
#define twoCross_h
#include <iostream>

using namespace std;

int twoCross(int a[], int b[], int sizeA, int sizeB)    //take the array and the size
{
    int count = 0;  //to calculate the number of elements
    int n = 0;  //to check whether we need to output the comma
    cout << "{";
    for(int i = 0; i < sizeA; i++)
    {
        for(int j = 0; j < sizeB; j++)
        {
            cout << "(" << a[i] << "," << b[j] << ")";
            count++;
            n = i + j;
            if (n != sizeA + sizeB -2) //if it is not the last element
            {
                cout << ",";
            }
        }
    }
    cout << "}" << endl;
    return count;
}

#endif
