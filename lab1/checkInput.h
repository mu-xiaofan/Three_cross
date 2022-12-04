#ifndef checkInput_h
#define checkInput_h
#include <iostream>

using namespace std;

int checkInput()
{
    int x;
    cin >> x;
    while (cin.fail())  //if the user entered the character
    {
        cout << "Please enter a valid number: ";
        cin.clear();
        cin.ignore(1024,'\n');
        cin >> x;
    }
    
    return x;
}

#endif /* checkInput_h */
