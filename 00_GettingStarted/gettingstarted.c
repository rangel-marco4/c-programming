/*
 * Getting Started in C
 * By Marco R.
 * 
 * */

// Basic structure of C program:
#include <stdio.h> // required for pre-processor directive before compilation begins
#include <string.h> // required when using string methods


// Function to read user integer input
void readUserAge(int *userAge) // notice that the parameter is a *pointer because we need to
{																 // change the value of userAge
	printf("Enter your age: ");
	scanf("%d", userAge);

}

// Function to read user string (we need #include <string.h>) 
void readUserString(char *nameBuffer, int size)
{
	printf("What is your name? ");
	fgets(nameBuffer, size, stdin);

	// clean up: fgets() keeps the trailing newline character '\n' from Enter key
	nameBuffer[strcspn(nameBuffer, "\n")] = '\0';
}



// program entry point is main() function
// argc = argument count => integer storing total # of cmd argument items
// argv = argument vector => array of null-terminated strings containing specific inputs
int main(int argc, char *argv[]) 
{
		// allocating memory for an array of size 50 characters
	  char userName[50]; // strings are arrays of characters, set with a specific size (50)
		
		// pass array name directly (no '&' required) because passing arrays into a function
		// automatically transforms into a pointer to its first element
		readUserString(userName, sizeof(userName));

		printf("Hello, %s!\n", userName);


		int userAge = 0;
		printf("Hello, world!\n"); // printing out with a new line sequence character
		printf("userAge before: %d\n", userAge);

		readUserAge(&userAge); // we pass the _address_ of userAge to the function

		printf("userAge after: %d\n", userAge); // print AFTER we have gotten user input and the value has been changed

		return 0; // ensure that the program terminates correctly
}
