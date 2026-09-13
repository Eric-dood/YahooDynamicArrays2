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

    reverseArray(nameList);
    displayArray(nameList);
}

//Define reverseArray()
void reverseArray(string *str)
{
    string temp;
    for (int i = 0; i < SIZE; i++)
    {
        temp = *(str + (SIZE - (i+1)));
        *(str + i) = temp;
    }
}

//Define displayArray()
void displayArray(string *str)
{
    //Use a nested loop to print out the array elements
    for (int i = 0; i < SIZE; i++)
    {
        //Print out the element
        cout << *(str + i);
        //if the array size is smaller than SIZE - 1, put a comma between the names
        if (i < SIZE - 1) cout << ", ";
    }
}