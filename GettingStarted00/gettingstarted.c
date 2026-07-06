/*
 * Getting Started in C
 * By Marco R.
 * 
 * */

// Basic structure of C program:
#include <stdio.h> // required for pre-processor directive before compilation begins

// program entry point is main() function
// argc = argument count => integer storing total # of cmd argument items
// argv = argument vector => array of null-terminated strings containing specific inputs
int main(int argc, char *argv[]) 
{
		printf("Hello, world!\n"); // printing out with a new line sequence character
		return 0; // ensure that the program terminates correctly
}
