// MyFirstCPlusPlusProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// include the iostream and std namespace to display text
#include <iostream>
using namespace std;

// make an int
static int firstInt = 2;

// make a method that displays the int we made
void myFirstFunction() {
	cout << firstInt << endl;
}

int main()
{
	// print meme
	cout << "Meme" << endl;
	
	// display method
	myFirstFunction();

	// change the int value
	firstInt = 3;

	// display the int
	cout << firstInt << endl;

	// pause like we do in the c# app with Console.ReadKey()
	system("PAUSE");
    return 1;
}

