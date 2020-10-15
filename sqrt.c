/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// this is main function
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("DEBUG: Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	
	// input check
	if (input == 0 && strcmp(argv[1], "0"))
	{
		printf("DEBUG: ERROR NAN: Input must be a number\n\n");
		exit(-1);
	}
	else if (input < 0)
	{
		input = (-1)*input;
		printf("DEBUG: Sqrt of %d is %.2fi\n", input, sqrt(input));
	}
	else
	{
		printf("DEBUG: Sqrt of %d is %f\n",input,sqrt(input));
	}
	
	printf("DEBUG: End of program. Exiting.\n");
	return(0);

} // end main
