#ifndef threeCross_h
#define threeCross_h
#include <iostream>

using namespace std;

void threeCrosswithparenthesesinthebeginning(int a[], int b[], int c[], int sizeA, int sizeB, int sizeC)
{
    int n = 0;
    cout << "{";
    for(int i = 0; i < sizeA; i++)
    {
        for(int j = 0; j < sizeB; j++)
        {
            for (int k = 0; k <sizeC; k++)
            {
                cout << "(" << a[j] << "," << b[k] << ")," << c[i] << ")";
                n = i + j + k;
                if (n != sizeA + sizeB + sizeC - 3)
                {
                    cout << ",";
                }
            }
        }
    }
    cout << "}" << endl;
}

#endif
