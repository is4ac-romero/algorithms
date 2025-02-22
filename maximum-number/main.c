#include <stdio.h>
#include <stdlib.h>

int findTheLargestNumber(int *array) { //get the address of array and put it inside a pointer
	int largestNumber = 0;
	largestNumber = array[0]; //var to receive the first element

	for(int i = 1; i < 5; i++) { //run all the elements inside the array
		if(array[i] > largestNumber) { //if element in i position is greater than current largestNumber it swaps them
			largestNumber = array[i];
		}
	}

	return largestNumber;
}

int main() {
	int array[5] = {1, 2, 3, 4, 5}; //create an array with 5 indexes and assigned to them values
	int result = 0; //create a var to store the result

	result = findTheLargestNumber(array); //assigned the return as the result
	
	printf("%d\n", result); //print the result

	return 0;
}
