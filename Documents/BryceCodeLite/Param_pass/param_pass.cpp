/*
 * Robert Bryce Michaud
 * 10 Sept, 2017
 * COSC 2030
 * Prof. Borowczak
 */

#include <stdio.h>
#include <iostream>

using namespace std;


/*changes passed variable to cats
 * this is passing by reference beacause of the ampersand (&) in 
 * front of the parameter
 */
void switchToCat(string animal){
	animal = "cats";
}

int main()
{
	string dogs = "dogs"; //initial variable
	switchToCat(dogs); //calls the function 'switchToCat' and passes in the 'dog' variable
	cout << "I love " << dogs << endl; //prints to terminal
	return 0;
}
