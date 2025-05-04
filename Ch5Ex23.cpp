/*
    Program File Name: Ch5Ex23.cpp
    Programmer: Gabriel Inocentes
    Date: May 3, 2025
    Requirements: Make a program that makes a cool pattern that goes left and right

*/

#include <iostream>
#include <windows.h>

using namespace std;

void printPattern();
void lineSkip();

int i = 0;
//Declares a variable to set which pattern is being used
char pattern = 'a';


int main()
{
    while (true) {
        //Increasing pattern
        while (pattern == 'a') {
            if (i < 10) {
                i++;
            }
            else {
                pattern = 'b';
            }
            for (int x = i; x > 0; x--) {
                printPattern();
            }
            lineSkip();
        }

        //Decreasing pattern
        while (pattern == 'b') {
            if (i > 0) {
                i--;
            }
            else {
                pattern = 'a';
            }
            for (int x = i; x > 0; x--) {
                printPattern();
            }
            lineSkip();
        }
    }
}

//Prints the text
void printPattern() {
    cout << "+";
    //Sleep to delay the output a tiny bit and make the pattern look a bit nicer
    Sleep(1);
}

//Skips between pattern lines
void lineSkip() {
    cout << endl;
}