#ifndef RxR_h
#define RxR_h
#include <iostream>

using namespace std;
void RxR (int x, int y, int size)   //take the elements and the size
{
    int Arr[size];
    int count = 0; //count the number of elements in the new set
    if(x >= -5 && x <= 5)   //check whether it is in the range
    {
        Arr[count] = x; //set the array
        count++;    //count the element
    }
    if(y >= -5 && y <= 5)   //check whether it is in the range
    {
        Arr[count] = y; //set the array
        count++;    //count the element
    }
    if(count == 1)  //one element in the set
    {
        cout << "{(" << Arr[0] << "," << Arr[0] << ")}" << endl;
    }
    else if(count == 2) //two elements in the set
    {
        twoCross(Arr, Arr, count, count);   //call function to output the result
    }
    else    //no element in the set
    {
        cout << "Error! There may be no element in it! Can not calculate!" << endl;
    }
}


#endif
