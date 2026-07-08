/*
 *
 * Pointers
 *
 * By Marco R.
 *
 *
 */

#include <stdio.h> 
// pointers are one of the big pluses of C, whereas Python or Java hide
// memory mechanics, C exposes them and gives you full control over the memory.
// HOWEVER: if you don't know how to manage memory correctly, bugs will most
// definitely appear in your programs.

void SimpleExample()
{
	int myNum = 23;
	printf("myNum value: %d\n", myNum); // prints out the value within the variable
	printf("myNum Memory Address: %p\n", &myNum); // prints out the virtual mem address of myNum
}

void PointerExample()
{
	int myNum = 43; // regular int variable
	int* myPtr = &myNum; // pointer variable that holds the mem address of myNum
	
	printf("myNum value: %d\n", myNum);
	printf("myPtr value: %p\n", myPtr);

	

}

void DereferenceExample(int* pointer)
{
	int result = *(pointer); // should give us value of exampleNum in main()
	printf("examplePtr value: %p\n", pointer);
	printf("result value: %d\n", result);
	
}

int main(int argc, char *argv[])
{
	// pointers are used for directly accessing, manipulating and managing computer memory
	int exampleNum = 199;
	int* examplePtr = &exampleNum;


	SimpleExample();
	PointerExample();
	DereferenceExample(examplePtr); // should print out 199
	return 0;
}
