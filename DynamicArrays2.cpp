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
    //Add the name list that's compromised of 5 different names
    string names[SIZE] = { "Eric", "Joey", "Zoe", "Sarah", "Holly" };
    //Add a dynamic string array that will contain the 5 names altogether
    string *nameList = new string[SIZE];
    nameList = names;

    //Display the original array by using displayArray()
    cout << "Original array: ";
    displayArray(nameList);

    //Reverse the nameList array by using reverseArray()
    reverseArray(nameList);
    //Then display the modified nameList array by using displayArray()
    cout << endl << "Reversed array: ";
    displayArray(nameList);
}

//Define reverseArray()
void reverseArray(string *str)
{
    //Initialize a temporary string variable that will be used for looping
    string temp;
    //Use a for-loop to go through all elements
    for (int i = 0; i < SIZE / 2; i++)
    {
        //Initialize the 'last' variable which will be used for the last elements of the array
        int last = SIZE - (i+1);
        //Initialize the temporary variable that will contain the last, unmodified element of the array
        temp = *(str + last);
        //Make the last element of the variable be the first or ith element of the variable
        *(str + last) = *(str + i);
        //Set the ith element as the temporary variable
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