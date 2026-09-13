//COMSC-210 | Lab 6 | Eric-Giulio Hedes
#include <iostream>
#include <iomanip>
using namespace std;

//Define the global constant variable that will be used for the array size.
const int SIZE = 5;

//Define the function prototypes
void reverseArray(string*);
void displayArray(string*);

//Start of main()
int main()
{
    string names[SIZE] = { "Eric", "Joey", "Zoe", "Sarah", "Holly" };
    string *nameList = new string[SIZE];
    nameList = names;

    displayArray(nameList);
}

//Define displayArray()
void displayArray(string *str)
{
    //Use a nested loop to print out the array elements
    for (int i = 0; i < SIZE; i++)
    {
        cout << *(str + i);
        if (i < SIZE - 1) cout << ", ";
    }
}