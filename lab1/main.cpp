#include <iostream>
#include "twoCross.h"
#include "checkInput.h"
#include "threeCrosswithparenthesesinthebeginning.h"
#include "threeCross.h"
#include "RxR.h"

using namespace std;

int main()
{
    int x, y;
    cout << "Please enter the value for A:" << endl;
    cout << "x: ";
    x = checkInput(); //let user enter the value and check it
    cout << "y: ";
    y = checkInput(); //let user enter the value and check it
    int a, b;
    cout << "Please enter the value for C:" << endl;
    cout << "x: ";
    a = checkInput(); //let user enter the value and check it
    cout << "y: ";
    b = checkInput(); //let user enter the value and check it
    int A[2] = {x,y};
    int B[3] = {1,2,3};
    int C[2] = {a,b};
    int EAB;
    cout << "This is AxB: ";
    EAB = twoCross(A, B, 2, 3); //call function to output the result
    cout << "AxB has " << EAB << " elements." << endl;
    cout <<endl;
    
    int EBA;
    cout << "This is BxA: ";
    EBA = twoCross(B, A, 3, 2); //call function to output the result
    cout << "BxA has " << EBA << " elements." << endl;
    cout <<endl;
    
    int EAA;
    cout << "This is AxA: ";
    EAA = twoCross(A, A, 2, 2); //call function to output the result
    cout << "AxA has " << EAA << " elements." << endl;
    cout <<endl;
    
    cout << "This is (AxB)xC: ";
    threeCrosswithparenthesesinthebeginning(A, B, C, 2, 3, 2); //call function to output the result
    
    
    cout << "This is AxBxC: ";
    threeCross(A, B, C, 2, 3, 2);
    
    cout << "If R denote the set of all real numbers (not integers only), it is hard to print the result of RxR because it will be infinite. But, it will be something like RxR = {(-5,-5).........(5,5)}." << endl; //it will be the set of all numbers between those 4 lines (x = +-5 & y = +-5)
    
    cout << "But, after picking all the elements in the range from -5 to 5 from the set A, we can find the cartesian product of the new set: ";
    RxR(A[0], A[1], 2); //call function to output the result
    
    
    
    
    return 0;
}
