#ifndef threeCrosswithparenthesesinthebeginning_h
#define threeCrosswithparenthesesinthebeginning_h
#include <iostream>

using namespace std;

void threeCrosswithparenthesesinthebeginning(int a[], int b[], int c[], int sizeA, int sizeB, int sizeC)       //take the array and the size
{
    int n = 0;//to check whether we need to output the comma
    cout << "{";
    for(int i = 0; i < sizeC; i++)
    {
        for(int j = 0; j < sizeA; j++)
        {
            for (int k = 0; k <sizeB; k++)
            {
                cout << "((" << a[j] << "," << b[k] << ")," << c[i] << ")";
                n = i + j + k;
                if (n != sizeA + sizeB + sizeC - 3) //if it is not the last element
                {
                    cout << ",";
                }
            }
        }
    }
    cout << "}" << endl;
}

#endif
