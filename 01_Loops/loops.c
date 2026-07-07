/* 
 *  Loops in C
 *
 *  By Marco R
 */

#include <stdio.h>
#include <string.h>


// You should use a while loop when the number of iterations is UNKNOWN beforehand
void whileLoop(const char *str)
{
	printf("While Loop Example to run through string '%s'\n", str);

	size_t strSize = strlen(str);
	printf("String size: %ld\n", strSize); // since long unsigned int need to use %ld
 
	int loopCount = 0;
	while (loopCount < strSize)
	{
		printf("[%d]: %c\n", loopCount, str[loopCount]);
		loopCount++;
	}
 	
}

// You should use a for-loop when the number of iterations is KNOWN beforehand
void forLoop(const int *arr, int size)
{
	printf("\n\nFor Loop Example\n");

	for (int start = 0; start < size; start++)
	{
		printf("[%d]: %d\n", start, arr[start]);
	}


}


// You should use a do-while loop when you need the loop to run AT LEAST once
// the do-while loop will ALWAYS execute at least once
void doWhileLoop(const int *arr, const int size)
{
	printf("\n\nDo-While loop example\n");

	int loopCount = 0;
	do
	{
		printf("[%d]: %d\n", loopCount, arr[loopCount]);
		loopCount++;
	} while (loopCount < size);


}

int main(int argc, char *argv[])
{
	char greeting[] = "This is my string!"; // strings in C are char arrays
	int myArr[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("Hello from Loops!\n");

	whileLoop(greeting); 
	forLoop(myArr, 10);
	doWhileLoop(myArr, 10);	




	return 0; // program terminates successfully
}
