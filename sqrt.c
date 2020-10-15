/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// this is main function
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("NEGSUPPORT: Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	
	// input check
	if (input == 0 && strcmp(argv[1], "0"))
	{
		printf("NEGSUPPORT: ERROR NAN: Input must be a number\n\n");
		exit(-1);
	}
	else if (input < 0)
	{
		input = (-1)*input;
		printf("NEGSUPPORT: Sqrt of %d is %.2fi\n", input, sqrt(input));
	}
	else
	{
		printf("NEGSUPPORT: Sqrt of %d is %f\n",input,sqrt(input));
	}
	
	printf("End of program. Exiting...\n");


} // end main
